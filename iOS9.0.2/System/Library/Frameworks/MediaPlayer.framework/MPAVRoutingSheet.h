/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MPAVRoutingViewControllerDelegate.h>

@class UIWindow, UIView, UIButton, MPAVRoutingViewController, NSString;

@interface MPAVRoutingSheet : UIView <MPAVRoutingViewControllerDelegate> {

	UIWindow* _presentationWindow;
	UIView* _backgroundView;
	UIView* _controlsView;
	UIButton* _cancelButton;
	MPAVRoutingViewController* _routingViewController;
	/*^block*/id _completionHandler;

}

@property (assign,setter=setAVItemType:,nonatomic) unsigned avItemType; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAVItemType:(unsigned)arg1 ;
-(void)showInView:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)routingViewController:(id)arg1 didPickRoute:(id)arg2 ;
-(void)routingViewControllerDidUpdateContents:(id)arg1 ;
-(void)routingViewControllerDidShowAirPlayDebugScreen:(id)arg1 ;
-(void)setAVItemType:(unsigned)arg1 ;
-(unsigned)avItemType;
-(CGRect)_routingViewFrame;
-(CGRect)_cancelButtonFrame;
-(CGRect)_controlsViewFrame;
-(void)_updateRoutingSheetFrame;
-(void)_animateControls:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(CGSize)_maxRoutingViewSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)dismiss;
-(void)_cancelButtonAction:(id)arg1 ;
@end

