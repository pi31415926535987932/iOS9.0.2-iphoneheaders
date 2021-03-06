/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABMultiCellContentView.h>
#import <UIKit/UITextFieldDelegate.h>

@class ABHighlightingTextField, NSString;

@interface ABMultiCellContentView_Simple : ABMultiCellContentView <UITextFieldDelegate> {

	ABHighlightingTextField* _textField;
	NSString* _previousValue;

}

@property (nonatomic,readonly) NSString * text; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(char)arg6 ;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)arg1 ;
-(char)wantsLabelDivider;
-(char)canHandleProperty:(int)arg1 ;
-(void)updateSubviewsForNewStateAnimated:(char)arg1 ;
-(id)viewForFirstResponder;
-(id)hitTestForTouches:(id)arg1 withEvent:(id)arg2 ;
-(char)shouldSendTouchesToSuperviewForHitView:(id)arg1 ;
-(char)tabToNextResponder:(char)arg1 fromView:(id)arg2 ;
-(void)setPropertyGroup:(id)arg1 andInfo:(id)arg2 ;
-(char)isValidValue:(id)arg1 ;
-(id)pickerView;
-(void)dealloc;
-(void)reload;
-(NSString *)text;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldClear:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(SCD_Struct_AB7)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(void)textFieldTextDidChange:(id)arg1 ;
@end

