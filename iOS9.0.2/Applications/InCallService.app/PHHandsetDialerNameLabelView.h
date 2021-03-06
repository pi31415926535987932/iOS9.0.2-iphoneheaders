/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, NSString;

@interface PHHandsetDialerNameLabelView : UIControl {

	UILabel* _nameAndLabelLabel;
	float _fontSize;
	NSString* _displayedName;
	NSString* _displayedLabel;

}

@property (retain) UILabel * nameAndLabelLabel;              //@synthesize nameAndLabelLabel=_nameAndLabelLabel - In the implementation block
@property (assign,nonatomic) float fontSize;                 //@synthesize fontSize=_fontSize - In the implementation block
@property (retain) NSString * displayedName;                 //@synthesize displayedName=_displayedName - In the implementation block
@property (retain) NSString * displayedLabel;                //@synthesize displayedLabel=_displayedLabel - In the implementation block
-(void)showName:(id)arg1 label:(id)arg2 animated:(char)arg3 ;
-(void)setNameAndLabelLabel:(UILabel *)arg1 ;
-(UILabel *)nameAndLabelLabel;
-(NSString *)displayedName;
-(NSString *)displayedLabel;
-(void)setDisplayedName:(NSString *)arg1 ;
-(void)setDisplayedLabel:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(id)textColor;
-(void)setFontSize:(float)arg1 ;
-(float)fontSize;
@end

