/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIToolbarButton.h>

@class NSString, NSSet;

@interface UIToolbarTextButton : UIToolbarButton {

	NSString* _title;
	NSString* _pressedTitle;
	NSSet* _possibleTitles;

}
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(id)_scriptingInfo;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setPressed:(char)arg1 ;
-(id)initWithTitle:(id)arg1 pressedTitle:(id)arg2 withFont:(id)arg3 withBarStyle:(int)arg4 withStyle:(int)arg5 withTitleWidth:(float)arg6 possibleTitles:(id)arg7 withToolbarTintColor:(id)arg8 ;
@end
