/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@protocol ASTCustomizeCellDelegateProtocol;
@class UIView, NSBundle, ASTButtonCell, NSMutableDictionary, NSMutableArray;

@interface ASTCustomizeCell : PSTableCell {

	UIView* _astBackgroundView;
	NSBundle* _astBundle;
	ASTButtonCell* _downCell;
	NSMutableDictionary* _buttonCells;
	NSMutableArray* _popoverAvailableIcons;
	id<ASTCustomizeCellDelegateProtocol> _delegate;

}

@property (assign,nonatomic) id<ASTCustomizeCellDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_removeInvalidIconsIfNeeded;
-(void)updateButton:(id)arg1 withIcon:(id)arg2 layout:(int)arg3 ;
-(void)_rearrangeMap;
-(void)_displayPickerForIcon:(id)arg1 andLocation:(id)arg2 cell:(id)arg3 ;
-(void)_layoutIcons;
-(id)_astImageForKey:(id)arg1 ;
-(char)_accessibilityIgnoreInternalLabels;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setDelegate:(id<ASTCustomizeCellDelegateProtocol>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<ASTCustomizeCellDelegateProtocol>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)accessibilityElements;
@end
