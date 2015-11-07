/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactHeaderView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/CNPropertyGroupItemDelegate.h>

@protocol CNPropertyCellDelegate;
@class UITableView, NSArray, NSString;

@interface CNContactHeaderEditView : CNContactHeaderView <UITableViewDelegate, UITableViewDataSource, CNPropertyGroupItemDelegate> {

	UITableView* _editingTable;
	NSArray* _editingGroups;
	id<CNPropertyCellDelegate> _namePropertyDelegate;

}

@property (nonatomic,retain) NSArray * editingGroups;                                             //@synthesize editingGroups=_editingGroups - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> namePropertyDelegate;              //@synthesize namePropertyDelegate=_namePropertyDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactHeaderViewWithContact:(id)arg1 editingGroups:(id)arg2 ;
-(void)reloadDataPreservingChanges:(char)arg1 ;
-(void)updateFontSizes;
-(id)initWithContact:(id)arg1 editingGroups:(id)arg2 frame:(CGRect)arg3 ;
-(void)setEditingGroups:(NSArray *)arg1 ;
-(id<CNPropertyCellDelegate>)namePropertyDelegate;
-(id)_phoneticNameForValue:(id)arg1 isFamilyName:(char)arg2 ;
-(void)propertyItem:(id)arg1 willChangeValue:(id)arg2 ;
-(void)setEditingGroups:(id)arg1 withUpdate:(char)arg2 ;
-(char)photoIsModified;
-(id)selectEditingGroupAtIndex:(unsigned)arg1 ;
-(NSArray *)editingGroups;
-(void)setNamePropertyDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)becomeFirstResponder;
-(void)updateConstraints;
-(char)hasPhoto;
@end
