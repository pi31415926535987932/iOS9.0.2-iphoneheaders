/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIView, UIColor;

@interface MTTableViewCell : UITableViewCell {

	char _enabled;
	UIView* _separator;
	char _showsSeparator;
	char _shouldHaveFullLengthSeparator;
	UIView* _leftAccessoryView;
	UIView* _leftEditingAccessoryView;
	/*^block*/id _deleteButtonBlock;
	UIColor* _swipeToDeleteButtonColor;

}

@property (nonatomic,retain) UIView * leftAccessoryView;                      //@synthesize leftAccessoryView=_leftAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * leftEditingAccessoryView;               //@synthesize leftEditingAccessoryView=_leftEditingAccessoryView - In the implementation block
@property (assign,nonatomic) char showsSeparator;                             //@synthesize showsSeparator=_showsSeparator - In the implementation block
@property (assign,nonatomic) char shouldHaveFullLengthSeparator;              //@synthesize shouldHaveFullLengthSeparator=_shouldHaveFullLengthSeparator - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) id deleteButtonBlock;                              //@synthesize deleteButtonBlock=_deleteButtonBlock - In the implementation block
@property (nonatomic,retain) UIColor * swipeToDeleteButtonColor;              //@synthesize swipeToDeleteButtonColor=_swipeToDeleteButtonColor - In the implementation block
@property (nonatomic,retain) UIView * separator;                              //@synthesize separator=_separator - In the implementation block
+(id)detailTextColor;
+(float)rowHeight;
+(id)textColor;
+(id)titleFont;
+(id)detailFont;
-(void)setupCell;
-(void)setDeleteButtonBlock:(id)arg1 ;
-(void)setSwipeToDeleteButtonColor:(UIColor *)arg1 ;
-(void)createSeparator;
-(char)shouldHaveFullLengthSeparator;
-(UIView *)leftEditingAccessoryView;
-(void)updateCellShadows:(char)arg1 ;
-(void)updateCellShadows:(char)arg1 animated:(char)arg2 ;
-(void)setLeftEditingAccessoryView:(UIView *)arg1 ;
-(void)setShowsSeparator:(char)arg1 ;
-(char)showsSeparator;
-(void)setShouldHaveFullLengthSeparator:(char)arg1 ;
-(id)deleteButtonBlock;
-(UIColor *)swipeToDeleteButtonColor;
-(void)setSeparator:(UIView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(UIEdgeInsets)separatorInset;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(void)didTransitionToState:(unsigned)arg1 ;
-(UIView *)separator;
-(void)setLeftAccessoryView:(UIView *)arg1 ;
-(UIView *)leftAccessoryView;
@end
