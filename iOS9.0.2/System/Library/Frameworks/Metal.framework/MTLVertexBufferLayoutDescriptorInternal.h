/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLVertexBufferLayoutDescriptor.h>

@interface MTLVertexBufferLayoutDescriptorInternal : MTLVertexBufferLayoutDescriptor {

	unsigned _stride;
	unsigned _stepFunction;
	unsigned _instanceStepRate;

}
-(unsigned)stepFunction;
-(unsigned)stepRate;
-(void)setStride:(unsigned)arg1 ;
-(unsigned)stride;
-(void)setStepFunction:(unsigned)arg1 ;
-(void)setStepRate:(unsigned)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
