/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABMultiCellContentView_Rows.h>

@class UILabel, NSString;

@interface ABMultiCellContentView_DisplayAlternate : ABMultiCellContentView_Rows {

	UILabel* _displayLabel;

}

@property (nonatomic,readonly) NSString * displayText; 
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(char)arg6 ;
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(char)arg6 includeRows:(char)arg7 ;
+(CGRect)displayLabelFrameForValueViewFrame:(CGRect)arg1 styleProvider:(id)arg2 whenEditing:(char)arg3 ;
+(id)displayLabelForReuse;
+(void)setupDisplayLabel:(id)arg1 withPropertyGroup:(id)arg2 styleProvider:(id)arg3 ;
+(void)numberOfLines:(int*)arg1 lineBreakMode:(int*)arg2 forDisplayLabelWithPropertyGroup:(id)arg3 styleProvider:(id)arg4 ;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)arg1 ;
-(void)updateSubviewsForNewStateAnimated:(char)arg1 ;
-(void)reloadIncludingRows:(char)arg1 includingDisplayView:(char)arg2 ;
-(void)reloadFromModelIncludingRows:(char)arg1 ;
-(void)reloadDisplayText;
-(CGRect)valueTextRect;
-(NSString *)displayText;
-(void)reload;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
@end

