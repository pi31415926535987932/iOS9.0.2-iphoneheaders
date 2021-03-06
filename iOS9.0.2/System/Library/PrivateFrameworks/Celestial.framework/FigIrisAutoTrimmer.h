/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class CMAttitude, NSOperationQueue, CMMotionManager, NSMutableArray;

@interface FigIrisAutoTrimmer : NSObject {

	CMAttitude* _captureMotionDelta;
	double _captureMotionDeltaPeriod;
	CMAttitude* _lastAttitude;
	CMAttitude* _lastDelta;
	double _lastCheckedTimestamp;
	int _badMotionCount;
	OpaqueFigSimpleMutexRef _motionSamplesLock;
	NSOperationQueue* _motionQueue;
	CMMotionManager* _motionManager;
	NSMutableArray* _motionSamples;
	double _bufferHistorySeconds;
	double _videoFrameRate;

}

@property (nonatomic,readonly) char trimmingActive; 
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)setVideoFrameRate:(double)arg1 ;
-(void)setBufferHistorySeconds:(double)arg1 ;
-(void)startMotionProcessing;
-(void)stopMotionProcessing;
-(int)emissionStatusForHostPTS:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)beginTrimmingForStillImageHostPTS:(SCD_Struct_BW2)arg1 minimumPTS:(SCD_Struct_BW2)arg2 ;
-(int)_emissionStatusForSample:(id)arg1 ;
-(char)trimmingActive;
-(double)bufferHistorySeconds;
-(double)videoFrameRate;
-(void)injectTimestamp:(double)arg1 attitudeQuaternion:(double)arg2 ;
@end

