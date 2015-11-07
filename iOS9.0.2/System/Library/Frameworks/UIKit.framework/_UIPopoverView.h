/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIPopoverBackgroundView, UIImageView, UIActionSheet, UIPopoverController, UIColor;

@interface _UIPopoverView : UIView {

	UIView* _contentView;
	UIPopoverBackgroundView* _backgroundView;
	Class _backgroundViewClass;
	UIImageView* _toolbarShine;
	char _showsBackgroundComponentHighlights;
	char _showsBackgroundViewHighlight;
	char _showsContentViewHighlight;
	UIActionSheet* _presentedActionSheet;
	UIPopoverController* _popoverController;
	float __dimmingViewTopEdgeInset;

}

@property (assign,nonatomic) char showsBackgroundComponentHighlights;                                         //@synthesize showsBackgroundComponentHighlights=_showsBackgroundComponentHighlights - In the implementation block
@property (assign,nonatomic) char showsBackgroundViewHighlight;                                               //@synthesize showsBackgroundViewHighlight=_showsBackgroundViewHighlight - In the implementation block
@property (assign,nonatomic) char showsContentViewHighlight;                                                  //@synthesize showsContentViewHighlight=_showsContentViewHighlight - In the implementation block
@property (assign,setter=_setDimmingViewTopEdgeInset:,nonatomic) float _dimmingViewTopEdgeInset;              //@synthesize _dimmingViewTopEdgeInset=__dimmingViewTopEdgeInset - In the implementation block
@property (assign,nonatomic) float arrowOffset; 
@property (assign,nonatomic) unsigned arrowDirection; 
@property (assign,nonatomic) int backgroundStyle; 
@property (nonatomic,copy) UIColor * popoverBackgroundColor; 
@property (nonatomic,retain) UIActionSheet * presentedActionSheet;                                            //@synthesize presentedActionSheet=_presentedActionSheet - In the implementation block
@property (assign,nonatomic) UIPopoverController * popoverController;                                         //@synthesize popoverController=_popoverController - In the implementation block
+(id)popoverViewContainingView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(int)backgroundStyle;
-(void)setBackgroundStyle:(int)arg1 ;
-(id)contentView;
-(char)_needsLayoutOnAnimatedFrameChangeForNewFrame:(CGRect)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(int)_style;
-(id)backgroundView;
-(id)viewController;
-(void)setUseToolbarShine:(char)arg1 ;
-(id)toolbarShine;
-(char)_allowsCustomizationOfContent;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(unsigned)arrowDirection;
-(void)setArrowDirection:(unsigned)arg1 ;
-(CGRect)_snapshotBounds;
-(UIPopoverController *)popoverController;
-(void)setArrowOffset:(float)arg1 ;
-(float)arrowOffset;
-(UIColor *)popoverBackgroundColor;
-(void)setPopoverBackgroundColor:(UIColor *)arg1 ;
-(float)_dimmingViewTopEdgeInset;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(char)arg3 ;
-(id)standardChromeView;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 ;
-(void)_layoutToolbarShine;
-(void)_showArrow;
-(void)_hideArrow;
-(void)setPresentedActionSheet:(UIActionSheet *)arg1 ;
-(void)_setDimmingViewTopEdgeInset:(float)arg1 ;
-(void)_setPopoverContentView:(id)arg1 ;
-(void)_setFrame:(CGRect)arg1 arrowOffset:(float)arg2 ;
-(void)_setCornerRadius:(float)arg1 ;
-(id)_viewForModalPresentationOfViewController:(id)arg1 ;
-(char)_isIgnoringTapsInDimmingView;
-(void)_setIgnoreTapsInDimmingView:(char)arg1 ;
-(char)toolbarIsVisible;
-(void)_presentationInPopoverDidBeginForViewController:(id)arg1 ;
-(void)_presentationInPopoverWillEndForViewController:(id)arg1 ;
-(void)_presentationInPopoverWillBeginForViewController:(id)arg1 ;
-(void)_presentationInPopoverDidEndForViewController:(id)arg1 ;
-(char)showsBackgroundComponentHighlights;
-(void)setShowsBackgroundComponentHighlights:(char)arg1 ;
-(char)showsBackgroundViewHighlight;
-(void)setShowsBackgroundViewHighlight:(char)arg1 ;
-(char)showsContentViewHighlight;
-(void)setShowsContentViewHighlight:(char)arg1 ;
-(UIActionSheet *)presentedActionSheet;
@end
