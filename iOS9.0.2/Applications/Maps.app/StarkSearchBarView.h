/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol StarkSearchBarViewDelegate;
@class UIView, StarkSearchField, UIButton, StarkFocusRingButton, NSString;

@interface StarkSearchBarView : UIView <UITextFieldDelegate> {

	char _editing;
	char _isRequiringVisibility;
	UIView* _backgroundView;
	StarkSearchField* _searchField;
	UIButton* _cancelButton;
	StarkFocusRingButton* _deleteButton;
	NSString* _searchTextBeforeEditingStarted;
	id<StarkSearchBarViewDelegate> _delegate;
	int _lightLevel;
	int _interactionModel;

}

@property (assign,nonatomic) int interactionModel;                                        //@synthesize interactionModel=_interactionModel - In the implementation block
@property (assign,nonatomic,__weak) id<StarkSearchBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * searchText; 
@property (nonatomic,retain) UIButton * deleteButton;                                     //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,copy) NSString * searchTextBeforeEditingStarted;                     //@synthesize searchTextBeforeEditingStarted=_searchTextBeforeEditingStarted - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_willChangeSearchTextToString:(id)arg1 ;
-(void)_endEditingWithOutcome:(int)arg1 searchTextForCommitting:(id)arg2 ;
-(void)_cancelAndEndEditingProgrammatically;
-(void)setSearchTextBeforeEditingStarted:(NSString *)arg1 ;
-(NSString *)searchTextBeforeEditingStarted;
-(void)_moveViewsToFinalPosition;
-(void)commitAndEndEditingWithSearchText:(id)arg1 ;
-(void)cancelAndEndEditing;
-(void)setSearchText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<StarkSearchBarViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<StarkSearchBarViewDelegate>)delegate;
-(int)interactionModel;
-(id)preferredFocusedView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(char)isFirstResponder;
-(void)beginEditing;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(NSString *)searchText;
-(void)textFieldClearButtonPressed:(id)arg1 ;
-(UIButton *)deleteButton;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(void)setInteractionModel:(int)arg1 ;
-(void)_deleteLastCharacter;
@end

