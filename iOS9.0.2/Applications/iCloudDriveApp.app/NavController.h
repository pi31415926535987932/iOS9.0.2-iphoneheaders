/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iCloudDriveApp.app/iCloudDriveApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCloudDriveApp/iCloudDriveApp-Structs.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <iCloudDriveApp/_UIDocumentListControllerDelegate.h>
#import <iCloudDriveApp/_UIDocumentTargetSelectionControllerDelegate.h>
#import <iCloudDriveApp/QuotaFetcherDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@class SplitViewController, NSString, UIBarButtonItem, NSDate, QuotaFetcher, UIDocumentInteractionController, FilenamePrompt, PreviewItemManager;

@interface NavController : UINavigationController <UINavigationControllerDelegate, _UIDocumentListControllerDelegate, _UIDocumentTargetSelectionControllerDelegate, QuotaFetcherDelegate, UIDocumentInteractionControllerDelegate> {

	char _editMode;
	char _pickerIsAlive;
	SplitViewController* _splitViewController;
	NSString* _viewTitle;
	UIBarButtonItem* _barButtonNewFolder;
	UIBarButtonItem* _barButtonDeleteItem;
	UIBarButtonItem* _barButtonMoveItem;
	NSDate* _lastQuotaFetch;
	QuotaFetcher* _quotaFetcher;
	UIDocumentInteractionController* _documentInteractionController;
	/*^block*/id _performActionCompletionBlock;
	FilenamePrompt* _folderPromptAlert;
	PreviewItemManager* _itemManager;
	unsigned long long _quotaBytes;

}

@property (assign,nonatomic,__weak) SplitViewController * splitViewController;                             //@synthesize splitViewController=_splitViewController - In the implementation block
@property (assign,nonatomic) char editMode;                                                                //@synthesize editMode=_editMode - In the implementation block
@property (nonatomic,retain) NSString * viewTitle;                                                         //@synthesize viewTitle=_viewTitle - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * barButtonNewFolder;                                         //@synthesize barButtonNewFolder=_barButtonNewFolder - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * barButtonDeleteItem;                                        //@synthesize barButtonDeleteItem=_barButtonDeleteItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * barButtonMoveItem;                                          //@synthesize barButtonMoveItem=_barButtonMoveItem - In the implementation block
@property (assign,nonatomic) char pickerIsAlive;                                                           //@synthesize pickerIsAlive=_pickerIsAlive - In the implementation block
@property (assign,nonatomic) unsigned long long quotaBytes;                                                //@synthesize quotaBytes=_quotaBytes - In the implementation block
@property (nonatomic,retain) NSDate * lastQuotaFetch;                                                      //@synthesize lastQuotaFetch=_lastQuotaFetch - In the implementation block
@property (nonatomic,retain) QuotaFetcher * quotaFetcher;                                                  //@synthesize quotaFetcher=_quotaFetcher - In the implementation block
@property (nonatomic,retain) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
@property (nonatomic,copy) id performActionCompletionBlock;                                                //@synthesize performActionCompletionBlock=_performActionCompletionBlock - In the implementation block
@property (nonatomic,retain) FilenamePrompt * folderPromptAlert;                                           //@synthesize folderPromptAlert=_folderPromptAlert - In the implementation block
@property (nonatomic,retain) PreviewItemManager * itemManager;                                             //@synthesize itemManager=_itemManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PreviewItemManager *)itemManager;
-(void)showWarningAndDeleteDocument:(id)arg1 ;
-(void)setItemManager:(PreviewItemManager *)arg1 ;
-(UIBarButtonItem *)barButtonMoveItem;
-(void)setBarButtonMoveItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)barButtonDeleteItem;
-(void)setBarButtonDeleteItem:(UIBarButtonItem *)arg1 ;
-(void)didBecomeActiveNotification:(id)arg1 ;
-(void)iCloudAccountAvailabilityChanged:(id)arg1 ;
-(void)setupInitialViewController;
-(void)setPickerIsAlive:(char)arg1 ;
-(char)checkICloudState;
-(void)setQuotaFetcher:(QuotaFetcher *)arg1 ;
-(void)setQuotaBytes:(unsigned long long)arg1 ;
-(void)initNewListController:(id)arg1 ;
-(QuotaFetcher *)quotaFetcher;
-(void)updateStatusUI:(id)arg1 ;
-(id)getTopDocumentListController;
-(void)setEditModeAndUpdateUI:(char)arg1 forViewController:(id)arg2 ;
-(void)showNewFolderPromptDuringMove:(id)arg1 itemsToMove:(id)arg2 ;
-(void)showMoveTargetForItems:(id)arg1 inFolder:(id)arg2 ;
-(char)containerHasSubfolders:(id)arg1 ;
-(id)moveItemsToDirectory:(id)arg1 toDirectory:(id)arg2 ;
-(void)setFolderPromptAlert:(FilenamePrompt *)arg1 ;
-(FilenamePrompt *)folderPromptAlert;
-(void)showWarningAndDeleteURLs:(id)arg1 usingView:(id)arg2 withDocumentListController:(id)arg3 finishedCompletion:(/*^block*/id)arg4 ;
-(unsigned)numContainersInURLArray:(id)arg1 ;
-(void)configureVisibleControllerForMode;
-(UIBarButtonItem *)barButtonNewFolder;
-(char)canEnableNewFolderForSelectedItems:(id)arg1 ;
-(void)configureNavBar:(id)arg1 ;
-(void)configureToolbar:(id)arg1 ;
-(void)endEditMode:(id)arg1 ;
-(void)beginEditMode:(id)arg1 ;
-(void)setBarButtonNewFolder:(UIBarButtonItem *)arg1 ;
-(void)promtForNewFolderAndCreate:(id)arg1 ;
-(void)showMoveTargetForSelectedItems:(id)arg1 ;
-(char)pickerIsAlive;
-(id)toolbarStatusText:(unsigned)arg1 ;
-(char)canShowMoveForSelectedItems:(id)arg1 ;
-(char)canShowDeleteForSelectedItems:(id)arg1 ;
-(NSDate *)lastQuotaFetch;
-(char)okToShowQuota;
-(id)quotaAvailableString;
-(unsigned long long)quotaBytes;
-(void)setLastQuotaFetch:(NSDate *)arg1 ;
-(void)showPreview:(id)arg1 previewMode:(int)arg2 ;
-(void)moveItemsToDirectoryAndShowErrors:(id)arg1 toDirectory:(id)arg2 ;
-(void)showRenamePrompt:(id)arg1 ;
-(void)showDIC:(id)arg1 url:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPerformActionCompletionBlock:(id)arg1 ;
-(void)showActionsMenuFromView:(id)arg1 url:(id)arg2 presentedURL:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleAccountChanges;
-(void)saveICloudToken:(id)arg1 ;
-(void)quotaFetcher:(id)arg1 didUpdateValue:(unsigned long long)arg2 ;
-(void)selectAllItems:(id)arg1 ;
-(void)documentListController:(id)arg1 performAction:(int)arg2 URL:(id)arg3 ;
-(void)logContainerURL;
-(void)showPreview_Splitview:(id)arg1 previewMode:(int)arg2 ;
-(char)showURLPreview:(id)arg1 previewMode:(int)arg2 ;
-(void)setSplitViewController:(SplitViewController *)arg1 ;
-(id)performActionCompletionBlock;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(SplitViewController *)splitViewController;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)documentTargetSelectionController:(id)arg1 didSelectItemAtURL:(id)arg2 ;
-(void)documentListController:(id)arg1 didSelectContainerWithViewController:(id)arg2 ;
-(void)documentListController:(id)arg1 didSelectItemAtURL:(id)arg2 ;
-(void)documentListController:(id)arg1 performAction:(int)arg2 URL:(id)arg3 originatingView:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)documentListControllerItemsChanged:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1 ;
-(void)setDocumentInteractionController:(UIDocumentInteractionController *)arg1 ;
-(UIDocumentInteractionController *)documentInteractionController;
-(char)editMode;
-(void)setEditMode:(char)arg1 ;
-(NSString *)viewTitle;
-(void)setViewTitle:(NSString *)arg1 ;
@end
