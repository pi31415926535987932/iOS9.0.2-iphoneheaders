/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIButton, UIView, CALayer, NSLayoutConstraint, NSArray, EKExpandingTextView;

@interface RemindersCreationFooterView : UIView {

	UILabel* _emptyTitlePositioningLabel;
	UIImageView* _plusImageView;
	UIButton* _infoButton;
	UIView* _topDividerLine;
	UIView* _bottomDividerLine;
	CALayer* _shadowLayer;
	NSLayoutConstraint* _rightConstraint;
	NSArray* _infoButtonConstraints;
	id _buttonTarget;
	SEL _buttonAction;
	char _floating;
	EKExpandingTextView* _textView;

}

@property (nonatomic,readonly) EKExpandingTextView * textView;              //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) char floating;                                 //@synthesize floating=_floating - In the implementation block
-(id)initWithFrame:(CGRect)arg1 infoButtonTarget:(id)arg2 infoButtonAction:(SEL)arg3 ;
-(void)showInfoButton:(char)arg1 ;
-(void)addTextView;
-(void)addTextViewConstraints;
-(void)adjustRightConstraint;
-(void)setFrame:(CGRect)arg1 ;
-(void)setFloating:(char)arg1 ;
-(char)floating;
-(id)titleFont;
-(EKExpandingTextView *)textView;
-(void)setupConstraints;
-(float)desiredHeight;
-(id)titleAttributes;
@end

