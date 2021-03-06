/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMConfiguration.h>
#import <iBooks/BKSeriesFolderLayerConfiguring.h>

@protocol IMFrameEnvironmentUITraitEnvironment, BKSeriesFolderFrameProvider;
@interface BKLibraryBookListViewConfiguration : IMConfiguration <BKSeriesFolderLayerConfiguring> {

	id<IMFrameEnvironment><UITraitEnvironment> _context;
	id<BKSeriesFolderFrameProvider> _frameProvider;

}

@property (nonatomic,__weak,readonly) id<IMFrameEnvironment><UITraitEnvironment> context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<BKSeriesFolderFrameProvider> frameProvider;                     //@synthesize frameProvider=_frameProvider - In the implementation block
@property (nonatomic,readonly) float seriesFolderBaseWidth; 
@property (nonatomic,readonly) float seriesFolderBaseHeight; 
@property (nonatomic,readonly) float seriesFolderCoverImageOffset; 
@property (nonatomic,readonly) float seriesFolderCoverImageGap; 
-(void)setFrameProvider:(id<BKSeriesFolderFrameProvider>)arg1 ;
-(void)_setupPhone;
-(void)_setupPad;
-(void)_setupDefault;
-(void)_setupRegularPhone;
-(void)_setupMegaPhone;
-(void)_setupPadSize;
-(void)_setupMegaPad;
-(void)_setupLargePhone;
-(float)seriesFolderBaseWidth;
-(float)seriesFolderBaseHeight;
-(float)seriesFolderCoverImageOffset;
-(float)seriesFolderCoverImageGap;
-(id<BKSeriesFolderFrameProvider>)frameProvider;
-(float)p_getSeriesFolderBaseWidth;
-(float)p_getSeriesFolderBaseHeight;
-(float)p_scaleMetric:(float)arg1 ;
-(id<IMFrameEnvironment><UITraitEnvironment>)context;
-(id)initWithContext:(id)arg1 ;
@end

