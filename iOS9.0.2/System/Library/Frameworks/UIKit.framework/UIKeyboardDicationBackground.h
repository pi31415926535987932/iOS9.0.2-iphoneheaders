/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIKeyboardDicationBackgroundGradientView;

@interface UIKeyboardDicationBackground : UIView {

	NSArray* _shadows;
	UIKeyboardDicationBackgroundGradientView* _gradient;

}

@property (nonatomic,retain) UIKeyboardDicationBackgroundGradientView * gradient;              //@synthesize gradient=_gradient - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setGradient:(UIKeyboardDicationBackgroundGradientView *)arg1 ;
-(UIKeyboardDicationBackgroundGradientView *)gradient;
-(id)shadows;
@end
