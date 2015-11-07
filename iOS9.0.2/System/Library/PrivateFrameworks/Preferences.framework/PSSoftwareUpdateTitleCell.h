/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>

@class PSSoftwareUpdateAnimatedIcon, UIProgressView, UILabel, PSWebContainerView, UIImage;

@interface PSSoftwareUpdateTitleCell : PSTableCell {

	int _progressStyle;
	PSSoftwareUpdateAnimatedIcon* _animatedGearView;
	char _animatingGearView;
	UIProgressView* _progressBar;
	UILabel* _updateStatusLabel;
	PSWebContainerView* _releaseNotesSummaryView;

}

@property (nonatomic,retain,readonly) UIImage * gearBackgroundImage; 
@property (nonatomic,retain) UIProgressView * progressBar;                              //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,retain) UILabel * updateStatusLabel;                               //@synthesize updateStatusLabel=_updateStatusLabel - In the implementation block
@property (nonatomic,retain) PSWebContainerView * releaseNotesSummaryView;              //@synthesize releaseNotesSummaryView=_releaseNotesSummaryView - In the implementation block
@property (assign,nonatomic) int progressDisplayStyle; 
+(int)cellStyle;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)didMoveToSuperview;
-(void)setProgress:(float)arg1 ;
-(UIProgressView *)progressBar;
-(void)setProgressBar:(UIProgressView *)arg1 ;
-(void)setStatusMessage:(id)arg1 ;
-(UIImage *)gearBackgroundImage;
-(id)newSoftwareUpdateAnimatedIconWithFrame:(CGRect)arg1 ;
-(void)sizeToFitWithTable:(id)arg1 ;
-(void)setAnimatingGearView:(char)arg1 ;
-(void)setReleaseNotesSummary:(id)arg1 ;
-(float)preferredHeightWithTable:(id)arg1 ;
-(int)progressDisplayStyle;
-(void)setProgressDisplayStyle:(int)arg1 ;
-(UILabel *)updateStatusLabel;
-(void)setUpdateStatusLabel:(UILabel *)arg1 ;
-(PSWebContainerView *)releaseNotesSummaryView;
-(void)setReleaseNotesSummaryView:(PSWebContainerView *)arg1 ;
@end
