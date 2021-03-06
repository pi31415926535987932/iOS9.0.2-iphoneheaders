/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/TransitRoutePickingCell.h>

@protocol TransitRoutePickingPageCellDelegate;
@class UIButton, NSLayoutConstraint;

@interface TransitRoutePickingPageCell : TransitRoutePickingCell {

	UIButton* _moreRoutesButton;
	NSLayoutConstraint* _buttonToTopConstraint;
	id<TransitRoutePickingPageCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TransitRoutePickingPageCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_autolayoutConstraints;
-(void)_moreRoutesButtonTapped:(id)arg1 ;
-(void)_updateConstraintValues;
-(void)_createSubviews;
-(void)setDelegate:(id<TransitRoutePickingPageCellDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(id)init;
-(id<TransitRoutePickingPageCellDelegate>)delegate;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end

