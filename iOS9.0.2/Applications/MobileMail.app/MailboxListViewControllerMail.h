/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MailboxListViewControllerBase.h>
#import <MobileMail/MailboxEditingControllerDelegate.h>

@protocol MailboxListViewControllerMailDelegate;
@class NSMutableSet, NSArray, MailboxContentViewController, NSString;

@interface MailboxListViewControllerMail : MailboxListViewControllerBase <MailboxEditingControllerDelegate> {

	unsigned _showsDisclosure : 1;
	unsigned _hideInbox : 1;
	NSMutableSet* _disabledMailboxes;
	NSMutableSet* _disabledMailboxTypes;
	NSArray* _defaultToolbarItems;
	NSArray* _editingToolbarItems;
	MailboxContentViewController* _mailboxContentViewController;
	double _lastCheckedOutbox;
	char _queuedOutboxCheck;
	id<MailboxListViewControllerMailDelegate> _mlvcmDelegate;
	char _viewIsVisible;
	char _alignAccessories;
	char _showRefreshControl;
	char _isRefreshing;
	unsigned _selectedSourceType;

}

@property (assign,nonatomic) unsigned selectedSourceType;              //@synthesize selectedSourceType=_selectedSourceType - In the implementation block
@property (assign,nonatomic) char isRefreshing; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)tableViewStyle;
-(void)setSelectedSourceType:(unsigned)arg1 ;
-(id)mailboxContentViewController;
-(id)topMailboxContentViewController;
-(void)clearAccount;
-(int)propagateChangeDownwards:(id)arg1 ;
-(unsigned)selectedSourceType;
-(void)pulledToRefresh:(id)arg1 ;
-(void)updateIsRefreshing;
-(void)statusBarProgressDidChange:(id)arg1 ;
-(void)messageStoreChanged:(id)arg1 ;
-(void)accountDisplayNameChanged:(id)arg1 ;
-(void)mailAccountsChanged:(id)arg1 ;
-(void)pendingMailboxesChanged:(id)arg1 ;
-(void)contentSizeCategoryChanged:(id)arg1 ;
-(void)showMailboxEditingControllerWithMailbox:(id)arg1 ;
-(void)disableMailboxTypes:(id)arg1 ;
-(void)enableMailboxTypes:(id)arg1 ;
-(void)_reloadIfOutboxChanged:(id)arg1 ;
-(void)_queueReloadIfOutboxChanged:(id)arg1 ;
-(void)newMailboxClicked:(id)arg1 ;
-(void)mailboxEditingControllerDidFinish:(id)arg1 ;
-(void)setMailboxListDelegate:(id)arg1 ;
-(CGRect)rectOfMailbox:(id)arg1 ;
-(id)cellForMailbox:(id)arg1 ;
-(void)setShowsDisclosure:(char)arg1 ;
-(void)setShowsRefreshControl:(char)arg1 ;
-(void)disableMailboxes:(id)arg1 ;
-(void)setHideInbox:(char)arg1 ;
-(void)updateTitle;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationWillSuspend;
-(char)shouldAutorotate;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_Ma3*)arg1 ;
-(char)isRefreshing;
-(void)shouldReloadMailboxesWithOutbox:(id)arg1 ;
-(char)shouldHideInbox;
-(char)shouldHideNotesForAccount:(id)arg1 ;
-(void)viewWillReappear:(char)arg1 ;
-(void)viewWillFirstAppear:(char)arg1 ;
-(id)indexPathForSelection;
-(void)didSelectMailbox:(id)arg1 changed:(char)arg2 animated:(char)arg3 ;
-(id)mailboxForIndexPath:(id)arg1 ;
-(id)_ntsMailboxesForAccount:(id)arg1 ;
-(id)indexPathForMailbox:(id)arg1 ;
-(void)setIsRefreshing:(char)arg1 ;
-(void)setAccount:(id)arg1 ;
@end

