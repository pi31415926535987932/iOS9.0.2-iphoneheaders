/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UIView.h>

@class GKBubbleSegmentedControlContext, _UIBackdropView, UIView;

@interface GKBubbleSegmentedControlFloatInAnimatorView : UIView {

	GKBubbleSegmentedControlContext* _context;
	_UIBackdropView* _backdropView;
	UIView* _knockoutView;
	UIView* _dimmingView;

}

@property (nonatomic,retain) GKBubbleSegmentedControlContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                         //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * knockoutView;                                  //@synthesize knockoutView=_knockoutView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                   //@synthesize dimmingView=_dimmingView - In the implementation block
+(id)animatorForContext:(id)arg1 ;
-(float)ez;
-(void)updateTargetBubblesAnimations;
-(void)floatInGamesBubble;
-(void)floatInPointsBubble;
-(void)floatInFriendsBubble;
-(void)setKnockoutView:(UIView *)arg1 ;
-(void)animateWithHandler:(/*^block*/id)arg1 ;
-(UIView *)knockoutView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(GKBubbleSegmentedControlContext *)context;
-(UIView *)dimmingView;
-(void)setContext:(GKBubbleSegmentedControlContext *)arg1 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
@end

