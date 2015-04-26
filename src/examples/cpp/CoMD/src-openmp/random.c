/// \file
///  Simple random number generators for uniform and Gaussian
///  distributions.  The generator in lcg61 and the hash in mkSeed aren't
///  really industrial strength, but they're more than good enough for
///  present purposes.

#include "random.h"

#include <math.h>

/// \details
///  Use the Box-Muller method to sample a Gaussian distribution with
///  zero mean and unit variance.  To ensure the same input seed always
///  generates the same returned value we do not use the standard
///  technique of saving one of the two generated randoms for the next
///  call.
///
///  \param [in,out] seed  Seed for generator.
///
///  \return A pseudo-random number in the interval (-infinity, infinity).
real_t gasdev(uint64_t* seed)
{
   real_t rsq,v1,v2;
   do 
   {
      v1 = 2.0*lcg61(seed)-1.0;
      v2 = 2.0*lcg61(seed)-1.0;
      rsq = v1*v1+v2*v2;
   } while (rsq >= 1.0 || rsq == 0.0);

   return v2 * sqrt(-2.0*log(rsq)/rsq);
} 

/// \details
///  A 61-bit prime modulus linear congruential generator with
/// modulus = 2^61 -1.
///
///  \param [in,out] seed  Seed for generator.
///
///  \return A pseudo-random number in the interval [0, 1].
double lcg61(uint64_t* seed)
{
   static double convertToDouble = 1.0/(2305843009213693951ULL);

   *seed *= (437799614237992725ULL);
   *seed %= (2305843009213693951ULL);

   return *seed*convertToDouble;
}

/// \details
///  Forms a 64-bit seed for lcg61 from the combination of 2 32-bit Knuth
///  multiplicative hashes, then runs off 10 values to pass up the worst
///  of the early low-bit correlations.
///
///  \param [in] id An id number such as an atom gid that is unique to
///  each entity that requires random numbers.
///
///  \param [in] callSite A unique number for each call site in the code
///  that needs to generate random seeds.  Using a different value for
///  callSite allows different parts of the code to obtain different 
///  random streams for the same id.
/// 
///  \return A 64-bit seed that is unique to the id and call site.
uint64_t mkSeed(uint32_t id, uint32_t callSite)
{
   uint32_t s1 = id * (2654435761UL);
   uint32_t s2 = (id+callSite) * (2654435761UL);

   uint64_t iSeed = ((0x100000000ULL) * s1) + s2;
   for (unsigned jj=0; jj<10; ++jj)
      lcg61(&iSeed);
      
   return iSeed;
}
