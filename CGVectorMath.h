//
//  CGVectorMath.h
//  
//
//  Created by Steven Zhang on 20/9/13.
//
//

#ifndef _CGVectorMath_h
#define _CGVectorMath_h

#define ZS_CGVectorAdd(v1,v2) CGVectorMake(v1.dx + v2.dx, v1.dy + v2.dy)
#define ZS_CGVectorSubtract(v1, v2) CGVectorMake(v1.dx - v2.dx, v1.dy - v2.dy)
#define ZS_CGVectorScalarMultiply(scalar, v) CGVectorMake(scalar * v.dx, scalar * v.dy)
#define ZS_CGVectorDotMultiply (v1.dx * v2.dx + v1.dy * v2.dy)
//#define ZS_CGVectorCrossMultiply
#define ZS_CGVectorGetMagnitude(v) sqrt(v.dx * v.dx + v.dy * v.dy)
//#define ZS_CGVectorGetDirection


#endif
