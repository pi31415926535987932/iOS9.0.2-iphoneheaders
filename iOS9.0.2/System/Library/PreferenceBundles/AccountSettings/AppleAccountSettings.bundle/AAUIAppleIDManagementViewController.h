/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <AppleAccountSettings/RUITextFieldChangeObserver.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class ACAccount, ACAccountStore, UITableView, UIView, AAUIProfilePictureStore, NSObject, NSString, AAUIProfilePhotoView, UIImagePickerController, UIImage, NSValue, NSOperationQueue, AARequester, AAUIRemoteUIController, UITableViewCell, AAUIFamilyMemberDetailsPageSurrogate, NSMutableDictionary, AKAppleIDAuthenticationController, AKAppleIDServerResourceLoadDelegate, RemoteUIController, ACUITextWithLinkButtonFooterView;

@interface AAUIAppleIDManagementViewController : PSViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, RemoteUIControllerDelegate, RUITextFieldChangeObserver, UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	ACAccount* _grandSlamAccount;
	UITableView* _tableView;
	UIView* _container;
	AAUIProfilePictureStore* _profilePictureStore;
	NSObject* _profilePictureStoreDidChangeObserver;
	id _deviceLocatorStateDidChangeObserver;
	NSString* _secondaryToken;
	AAUIProfilePhotoView* _profilePhotoView;
	char _isEditing;
	UIImagePickerController* _imagePicker;
	UIImage* _newProfilePicture;
	NSValue* _newProfilePictureCropRect;
	NSOperationQueue* _networkingQueue;
	NSString* _paymentMethodSummary;
	char _didFetchPaymentMethodSummary;
	AARequester* _paymentMethodSummaryRequester;
	AAUIRemoteUIController* _secondaryAuthRemoteUIController;
	/*^block*/id _secondaryAuthCompletion;
	char _hasShownSecondaryAuthFirstPage;
	NSString* _newPassword;
	UITableViewCell* _activelyLoadingCell;
	AAUIFamilyMemberDetailsPageSurrogate* _surrogate;
	AAUIRemoteUIController* _personalInfoRemoteUIController;
	AAUIRemoteUIController* _paymentInfoRemoteUIController;
	AAUIRemoteUIController* _securityRemoteUIController;
	AAUIRemoteUIController* _activeRemoteUIController;
	NSMutableDictionary* _remoteUILoadingURLsByController;
	char _isUpdatingName;
	unsigned _updatingNameRetryCount;
	int _firstNameRowIndex;
	int _lastNameRowIndex;
	AKAppleIDAuthenticationController* _authController;
	AKAppleIDServerResourceLoadDelegate* _serverUILoadDelegate;
	RemoteUIController* _trustedDevicesRemoteUIController;
	ACUITextWithLinkButtonFooterView* _footerView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)shouldPresentAsModalSheet;
-(id)_authController;
-(char)_hasActiveCell;
-(id)_editedLastName;
-(void)_editPhotoButtonWasTapped:(id)arg1 ;
-(void)_editButtonWasTapped:(id)arg1 ;
-(void)_doneButtonWasTapped:(id)arg1 ;
-(void)_beginEditingProfileInfo;
-(id)_editedFirstName;
-(void)_showAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_startUpdatingName;
-(void)_sendUpdateNameRequestWithFirstName:(id)arg1 lastName:(id)arg2 ;
-(void)_endEditingProfileInfo;
-(void)_didReceiveUpdateNameResponse:(id)arg1 ;
-(void)_stopUpdatingNameWithSucess:(char)arg1 ;
-(void)_findOutEditingFirstNameLastNameRows;
-(id)_createProfileNameAndPhotoCell;
-(id)_createFirstNameEditingCell;
-(id)_createLastNameEditingCell;
-(id)_createUsernameEditingCell;
-(id)_createPersonalInfoCell;
-(id)_createPasswordAndSecurityCell;
-(id)_createTrustedDevicesCell;
-(id)_createPaymentMethodCell;
-(void)_loadPaymentMethodSummary;
-(void)_personalInfoCellWasTapped:(id)arg1 ;
-(void)_passwordAndSecurityCellWasTapped:(id)arg1 ;
-(void)_trustedDevicesCellWasTapped:(id)arg1 ;
-(void)_paymentMethodCellWasTapped:(id)arg1 ;
-(void)_startSpinnerInCell:(id)arg1 ;
-(void)_stopSpinnerInActiveCell;
-(void)_handlePaymentMethodSummaryResponse:(id)arg1 ;
-(void)_refreshPaymentMethodRowWithSummary:(id)arg1 ;
-(void)_requestSecondaryAuthenticationIfNecessaryWithGSToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleSecondaryAuthenticationResponse:(id)arg1 baseURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_pushSecondaryAuthenticationRemoteUI:(id)arg1 baseURL:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_didFinishSecondaryAuthentication;
-(void)_generateLoginCode;
-(void)_cancelSecondaryAuthenticationWasTapped:(id)arg1 ;
-(void)_cancelButtonForRemoteObjectModelWasTapped:(id)arg1 ;
-(void)_snoopPasswordFromTextFieldWithID:(id)arg1 inObjectModel:(id)arg2 ;
-(void)_updateiCloudAccountWithSnoopedPassword;
-(id)_serverUILoadDelegate;
-(void)_refreshAppleIDSettingsTokensWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 secondaryToken:(id)arg3 accountStore:(id)arg4 ;
-(id)_footerView;
-(char)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(char)arg3 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(id)remoteUIController:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3 ;
-(void)_updateNavigationBarAnimated:(char)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)_showImagePickerForAvailableSources;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)_presentAppleIDPrivacyInformationPane;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(void)textFieldEditingDidEnd:(id)arg1 ;
-(void)_showImageSourcePicker;
-(void)_presentImagePickerWithSourceType:(int)arg1 ;
@end
