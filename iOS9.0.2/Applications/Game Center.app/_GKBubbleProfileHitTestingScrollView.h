/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UIScrollView.h>

@class GKBubbleFlowContainerView;

@interface _GKBubbleProfileHitTestingScrollView : UIScrollView {

	GKBubbleFlowContainerView* _containerView;

}

@property (nonatomic,retain) GKBubbleFlowContainerView * containerView;              //@synthesize containerView=_containerView - In the implementation block
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(GKBubbleFlowContainerView *)containerView;
-(void)setContainerView:(GKBubbleFlowContainerView *)arg1 ;
@end

