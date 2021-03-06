/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/PassbookUIService.app/PassbookUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKNavigationController.h>
#import <PassbookUIService/PKAddPaymentPassRequestViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupPrivacyFooterViewDelegate.h>
#import <PassbookUIService/PKAddPaymentPassDevicePickerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <libobjc.A.dylib/PKServiceAddPaymentPassViewControllerProtocol.h>

@class PKAddPaymentPassRequestConfiguration, PKPaymentPass, NSError, NSArray, NSString;

@interface PKServiceAddPaymentPassViewController : PKNavigationController <PKAddPaymentPassRequestViewControllerDelegate, PKPaymentSetupPrivacyFooterViewDelegate, PKAddPaymentPassDevicePickerDelegate, PKPaymentSetupViewControllerDelegate, PKServiceAddPaymentPassViewControllerProtocol> {

	PKAddPaymentPassRequestConfiguration* _configuration;
	PKPaymentPass* _pass;
	NSError* _error;
	char _showIntro;
	char _hasDeviceWebService;
	char _hasWatchWebService;
	NSArray* _webServices;
	char _entitled;
	NSString* _teamID;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)introViewController;
-(id)rootAddingVC;
-(void)_applyCancelItem:(id)arg1 ;
-(char)_shouldShowAutomaticPresentationScreenForTargetDevice:(id)arg1 ;
-(void)_applyDoneItem:(id)arg1 animated:(char)arg2 ;
-(void)_next;
-(id)_addRequestViewControllerForWebService:(id)arg1 ;
-(id)devicePickerViewController;
-(void)_applyDoneItem:(id)arg1 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)setConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pickerViewController:(id)arg1 didPickWebService:(id)arg2 ;
-(void)requestViewController:(id)arg1 didFinishWithPass:(id)arg2 error:(id)arg3 ;
-(void)requestViewController:(id)arg1 generateRequestWithCertificateChain:(id)arg2 nonce:(id)arg3 nonceSignature:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)privacyFooterLinkTapped:(id)arg1 ;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_cancel;
-(void)_done;
@end

