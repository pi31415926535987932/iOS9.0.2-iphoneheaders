/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CIBurstFaceScoreEntry : NSObject {

	float maxScore;
	float minScore;
	float sumScores;
	float sumSqScores;
	int numScores;

}

@property (assign) float maxScore; 
@property (assign) float minScore; 
@property (assign) int numScores; 
-(float)computeAverage;
-(id)initWithScore:(float)arg1 ;
-(void)addScore:(float)arg1 ;
-(float)computeStandardDeviation;
-(float)minScore;
-(void)setMinScore:(float)arg1 ;
-(int)numScores;
-(void)setNumScores:(int)arg1 ;
-(void)setMaxScore:(float)arg1 ;
-(float)maxScore;
@end

