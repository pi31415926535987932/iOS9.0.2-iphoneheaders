/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>

@class SiriUIKeyline, UIButton;

@interface SiriUIObjectPickerButtonView : UIView {

	SiriUIKeyline* _topKeyline;
	SiriUIKeyline* _bottomKeyline;
	char _showsTopKeyline;
	UIButton* _button;

}

@property (nonatomic,readonly) UIButton * button;               //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) char showsTopKeyline;              //@synthesize showsTopKeyline=_showsTopKeyline - In the implementation block
+(float)defaultHeight;
-(UIButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setShowsTopKeyline:(char)arg1 ;
-(char)showsTopKeyline;
@end
