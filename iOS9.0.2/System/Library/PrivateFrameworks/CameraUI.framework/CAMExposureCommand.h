/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMExposureCommand : CAMCaptureCommand {

	int __exposureMode;
	CGPoint __exposurePointOfInterest;

}

@property (nonatomic,readonly) int _exposureMode;                             //@synthesize _exposureMode=__exposureMode - In the implementation block
@property (nonatomic,readonly) CGPoint _exposurePointOfInterest;              //@synthesize _exposurePointOfInterest=__exposurePointOfInterest - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(int)_exposureMode;
-(id)initWithExposureMode:(int)arg1 ;
-(id)initWithExposureMode:(int)arg1 atPointOfInterest:(CGPoint)arg2 ;
-(CGPoint)_exposurePointOfInterest;
@end

