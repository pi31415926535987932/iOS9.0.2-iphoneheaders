/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UITextInputAdditions
@property (getter=isEditable,nonatomic,readonly) char editable; 
@property (getter=isEditing,nonatomic,readonly) char editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@optional
-(id)selectionInteractionAssistant;
-(char)_useGesturesForEditableContent;
-(id)_textInputViewForAddingGestureRecognizers;
-(id)_inputAssistantItem;

@required
-(char)isEditable;
-(char)isEditing;
-(id)interactionAssistant;
-(id)textInputView;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(CGRect*)_caretRect;

@end

