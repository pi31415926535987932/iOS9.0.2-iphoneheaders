/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/HNDView.h>
#import <assistivetouchd/HNDRockerButtonDataSource.h>

@class NSMutableArray, HNDRockerButton, HNDFingerView, CADisplayLink, AXDispatchTimer, UIImageView, HNDVolumeBar, _UIBackdropView, NSString;

@interface HNDRocker : HNDView <HNDRockerButtonDataSource> {

	int _state;
	NSMutableArray* _stackState;
	NSMutableArray* _rockerItems;
	HNDRockerButton* _selectedButton;
	HNDRockerButton* _backButton;
	int _selectedButtonIndex;
	int _backgroundType;
	HNDFingerView* _middleCircle;
	CGPoint _initialPoint;
	char _isFullMenuVisible;
	char _isNubbitVisible;
	char _useCircle;
	float _progress;
	char _sentRockers;
	char _linkRunning;
	CADisplayLink* _rockerLink;
	double _startInterval;
	AXDispatchTimer* _homeButtonDismissTimer;
	int _style;
	char _nubbitDimmed;
	AXDispatchTimer* _nubbitFadeTimer;
	UIImageView* _nubbitForeground;
	char _animatingNubbit;
	AXDispatchTimer* _volumeHideTimer;
	AXDispatchTimer* _volumeUpdateTimer;
	HNDVolumeBar* _volumeBar;
	_UIBackdropView* _backdropView;

}

@property (assign,nonatomic) int style;                             //@synthesize style=_style - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)initialRockerSize;
+(CGSize)nubbitSize;
-(void)highlightNubbit;
-(void)fadeNubbit;
-(char)isAnimatingNubbit;
-(char)customizationMapAllowInstanceActivation:(id)arg1 ;
-(void)handleRealUpEvent:(CGPoint)arg1 maxOrc:(float)arg2 ;
-(void)modalizeMenu:(char)arg1 modalButton:(id)arg2 ;
-(void)handleRealDownEvent:(CGPoint)arg1 ;
-(char)isFullMenuVisible;
-(CGPoint)onScreenLocation;
-(void)transitionMenuToNubbit:(CGPoint)arg1 changeAlpha:(char)arg2 animate:(char)arg3 ;
-(char)hoveredTo:(CGPoint)arg1 ;
-(void)implodeDisplayLinkFired:(id)arg1 ;
-(void)performPress:(int)arg1 type:(int)arg2 ;
-(void)setUseCircleMode:(char)arg1 ;
-(void)showMiddleCircle:(char)arg1 ;
-(void)transitionNubbitToMenu:(CGPoint)arg1 animationCompleted:(/*^block*/id)arg2 ;
-(void)setFullMenuVisible:(char)arg1 atPoint:(CGPoint)arg2 ;
-(void)setNubbitVisible:(char)arg1 ;
-(void)updateRingerSwitch;
-(void)updateRotationLockSwitch;
-(void)volumeChanged;
-(void)activateMenuItemDown:(id)arg1 ;
-(void)activateMenuItemUp:(id)arg1 ;
-(void)_goBackInMenuState:(int)arg1 ;
-(void)_siriPrefsChanged:(id)arg1 ;
-(void)_loadMenuItems:(char)arg1 iconStartPoint:(CGPoint)arg2 goBackwards:(char)arg3 originalState:(int)arg4 ;
-(int)_indexForAngle:(float)arg1 ;
-(id)_rockerHitTest:(CGPoint)arg1 ;
-(void)_updateSelectedButton;
-(void)showVolumeBar:(char)arg1 withProgress:(float)arg2 ;
-(void)_notificationCenterPressed;
-(void)_pinchPressed:(id)arg1 ;
-(void)_doubleTapPressed:(id)arg1 ;
-(void)_orbPressed:(id)arg1 ;
-(void)_lockButton:(char)arg1 ;
-(void)_volumeDown:(char)arg1 ;
-(void)_volumeUp:(char)arg1 ;
-(void)_tripleClickHomePressed;
-(void)_orientationPressed:(id)arg1 ;
-(void)_ringerPressed;
-(void)_setRingerSwitchIcon:(id)arg1 ;
-(void)_rotationLockPressed;
-(void)_setRotationLockIcon:(id)arg1 ;
-(void)_screenshotPressed;
-(void)_shakePressed;
-(void)_multiTasking;
-(void)_hardwareButtonPressed:(id)arg1 ;
-(void)_controlCenterPressed;
-(void)_homeButton:(char)arg1 ;
-(void)_customsPressed:(id)arg1 ;
-(id)_rockerButtonForLocation:(id)arg1 buttonType:(id)arg2 ;
-(void)_siriButtonPressed;
-(void)_voiceControlPressed;
-(void)_gesturesPressed:(id)arg1 ;
-(void)_customGesturePressed:(id)arg1 ;
-(void)_handleTouch:(int)arg1 ;
-(void)_handleRotate:(int)arg1 ;
-(char)_replaceRingerWithOrientationLock;
-(char)_includeRingerButtonInHardware;
-(void)_morePressed:(id)arg1 ;
-(void)_addFavoriteBoxPressed;
-(id)rockerButtons;
-(void)_layoutButton:(id)arg1 withPoint:(CGPoint)arg2 ;
-(void)_resetRockerButtons:(CGPoint)arg1 ;
-(void)_layoutBackButton;
-(CGPathRef)_pieSlice:(int)arg1 withSlices:(int)arg2 ;
-(void)_layoutButtonsWithAlpha:(float)arg1 startPoint:(CGPoint)arg2 ;
-(void)_addNewButtonsToView;
-(void)_mutePressed;
-(void)_setBackgroundWithType:(int)arg1 ;
-(void)_layoutEightRockers:(CGPoint)arg1 ;
-(void)_layoutInitialStateItems:(CGPoint)arg1 ;
-(void)_layoutTwoRockers:(CGPoint)arg1 ;
-(void)_layoutFourRockers:(CGPoint)arg1 ;
-(void)_layoutFiveOrSixRockers:(CGPoint)arg1 ;
-(void)_layoutArbitraryRockers:(CGPoint)arg1 ;
-(void)_loadInitialMenuItems;
-(void)_loadHardwareMenuItems;
-(void)_loadFavoritesMenuItems;
-(void)_loadRotateMenuItems;
-(void)_loadGesturesMenuItems;
-(void)_loadMoreMenuItems;
-(id)animationEndButtonForButtonTag:(int)arg1 ;
-(void)_layoutMenuItemsInReverse:(char)arg1 oldRockers:(id)arg2 animateToIcon:(id)arg3 ;
-(void)_layoutMenuItems:(char)arg1 oldRockers:(id)arg2 iconStartPoint:(CGPoint)arg3 ;
-(void)_resetHoverCircleLocation;
-(void)_updateVolumeDisplay;
-(void)showVolumeDisplayImmediately;
-(void)_resetVisibility:(char)arg1 ;
-(void)_initializeNubbit;
-(SCD_Struct_HN11)rockerButtonGuttersForRockerButton:(id)arg1 ;
-(void)_highlightRockerButtonAtAngle:(float)arg1 ;
-(char)_angleIndicatesReturnToCenter:(float)arg1 ;
-(void)_swipePressed;
-(void)_updateProgress:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(int)state;
-(int)style;
-(id)accessibilityLabel;
-(void)setStyle:(int)arg1 ;
-(id)accessibilityHint;
-(char)isAccessibilityElement;
-(char)accessibilityPerformEscape;
-(void)cleanup;
@end

