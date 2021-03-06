/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableArray;

@interface VCPHistogramSceneDetector : VCPVideoAnalyzer {

	LightweightFeature* _currentFeature;
	LightweightFeature* _previousFeature;
	SCD_Struct_VC6 _sceneStart;
	NSMutableArray* _sceneResults;

}
-(void)dealloc;
-(id)init;
-(id)results;
-(long)isSceneChange:(char*)arg1 ;
-(long)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned*)arg4 ;
-(long)finishAnalysisPass:(SCD_Struct_VC9)arg1 complete:(char*)arg2 ;
@end

