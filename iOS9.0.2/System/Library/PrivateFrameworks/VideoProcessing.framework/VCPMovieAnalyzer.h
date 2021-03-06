/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAsset, NSMutableDictionary, PFVideoAVObjectBuilder;

@interface VCPMovieAnalyzer : NSObject {

	unsigned _requestedAnalyses;
	AVAsset* _avAsset;
	NSMutableDictionary* _analysis;
	NSMutableDictionary* _results;
	PFVideoAVObjectBuilder* _slowmoTimeMap;
	unsigned _mediaSubType;
	int _status;

}

@property (readonly) int status;              //@synthesize status=_status - In the implementation block
-(int)status;
-(void)addResults:(id)arg1 ;
-(id)initWithPHAsset:(id)arg1 forAnalysisTypes:(unsigned)arg2 ;
-(id)analyzeAsset:(/*^block*/id)arg1 ;
-(long)analyzeVideoTrack:(id)arg1 cancel:(/*^block*/id)arg2 flags:(unsigned*)arg3 ;
-(id)orientationForVideoTrack:(id)arg1 ;
-(void)addResults:(id)arg1 forKey:(id)arg2 ;
-(id)createDecoderForTrack:(id)arg1 ;
-(id)createVideoAnalyzer:(id)arg1 ;
-(id)initWithAVAsset:(id)arg1 forAnalysisTypes:(unsigned)arg2 ;
@end

