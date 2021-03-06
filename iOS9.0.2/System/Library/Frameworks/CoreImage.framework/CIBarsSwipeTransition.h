/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIBarsSwipeTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	NSNumber* inputAngle;
	NSNumber* inputWidth;
	NSNumber* inputBarOffset;
	NSNumber* inputTime;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputBarOffset; 
@property (nonatomic,retain) NSNumber * inputTime; 
+(id)customAttributes;
-(NSNumber *)inputAngle;
-(NSNumber *)inputWidth;
-(CIImage *)inputTargetImage;
-(NSNumber *)inputTime;
-(id)_kernel;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(NSNumber *)inputBarOffset;
-(void)setInputBarOffset:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setInputTime:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
@end

