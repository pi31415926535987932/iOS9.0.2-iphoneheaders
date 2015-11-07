/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLockOverlayView.h>

@protocol SBLockScreenBuddyViewDelegate;
@class UILabel, SBUIAppleLogoView, SBLockOverlayStylePropertiesFactory, _UILegibilitySettings, UIView, UIButton;

@interface SBLockScreenBuddyView : SBLockOverlayView {

	UILabel* _titleLabel;
	SBUIAppleLogoView* _logoView;
	char _usesWhiteLogo;
	int _viewState;
	SBLockOverlayStylePropertiesFactory* _underlayPropertiesFactory;
	_UILegibilitySettings* _legibilitySettings;
	id<SBLockScreenBuddyViewDelegate> _delegate;
	unsigned _style;
	UIView* _activationInfoView;
	UIButton* _infoButton;
	UIView* _regulatoryInfoView;

}

@property (assign,nonatomic) id<SBLockScreenBuddyViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                                   //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,retain) UIView * activationInfoView;                             //@synthesize activationInfoView=_activationInfoView - In the implementation block
@property (nonatomic,retain) UIView * regulatoryInfoView;                             //@synthesize regulatoryInfoView=_regulatoryInfoView - In the implementation block
@property (assign,nonatomic) unsigned style;                                          //@synthesize style=_style - In the implementation block
-(void)configureOverlayPropertiesForStyle:(unsigned)arg1 ;
-(void)_adjustTitleVisibilityForInfoViews;
-(void)_toggleViewState;
-(void)setActivationInfoView:(UIView *)arg1 ;
-(void)setRegulatoryInfoView:(UIView *)arg1 ;
-(void)setTitleLanguage:(id)arg1 ;
-(char)isFakeLogoHidden;
-(UIView *)activationInfoView;
-(UIView *)regulatoryInfoView;
-(void)setDelegate:(id<SBLockScreenBuddyViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<SBLockScreenBuddyViewDelegate>)delegate;
-(unsigned)style;
-(void)setStyle:(unsigned)arg1 ;
-(id)legibilitySettings;
-(UIButton *)infoButton;
-(void)setInfoButton:(UIButton *)arg1 ;
-(void)setTitleString:(id)arg1 ;
-(id)underlayPropertiesFactory;
-(id)initWithFrame:(CGRect)arg1 useWhiteLogo:(char)arg2 ;
-(void)setViewState:(int)arg1 ;
@end
