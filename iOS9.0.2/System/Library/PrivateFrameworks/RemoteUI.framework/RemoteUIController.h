/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/RUILoaderDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>
#import <libobjc.A.dylib/RUIParserDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol RemoteUIControllerDelegate;
@class RUINavigationController, NSMutableArray, NSMutableDictionary, RUIPage, NSString, UIViewController, RUILoader, NSURLSessionConfiguration, UINavigationController;

@interface RemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, RUIParserDelegate, UINavigationControllerDelegate> {

	RUINavigationController* _modalNavigationController;
	NSMutableArray* _objectModels;
	NSMutableArray* _modalObjectModels;
	NSMutableDictionary* _elementChangeHandlers;
	RUIPage* _pageOriginatingLoad;
	NSString* _listeningForSMSIdentifier;
	NSString* _SMSAutoFillToken;
	UIViewController* _hostViewController;
	RUILoader* _loader;
	NSString* _userAgentString;
	id<RemoteUIControllerDelegate> _delegate;
	/*^block*/id _loadCompletion;
	NSURLSessionConfiguration* _sessionConfiguration;

}

@property (assign,nonatomic,__weak) UIViewController * hostViewController;                      //@synthesize hostViewController=_hostViewController - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController; 
@property (nonatomic,retain) RUILoader * loader;                                                //@synthesize loader=_loader - In the implementation block
@property (nonatomic,copy) NSString * userAgentString;                                          //@synthesize userAgentString=_userAgentString - In the implementation block
@property (assign,nonatomic,__weak) id<RemoteUIControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id loadCompletion;                                                   //@synthesize loadCompletion=_loadCompletion - In the implementation block
@property (nonatomic,copy) NSURLSessionConfiguration * sessionConfiguration;                    //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURLSessionConfiguration *)sessionConfiguration;
-(RUILoader *)loader;
-(void)loadURL:(id)arg1 postBody:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setHandlerForElementName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<RemoteUIControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<RemoteUIControllerDelegate>)delegate;
-(UINavigationController *)navigationController;
-(void)loadRequest:(id)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)removeHandlerForKey:(id)arg1 ;
-(void)setLoader:(RUILoader *)arg1 ;
-(void)setSessionConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(void)pushObjectModel:(id)arg1 animated:(char)arg2 ;
-(void)loadURL:(id)arg1 postBody:(id)arg2 ;
-(id)popObjectModelAnimated:(char)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)sessionConfigurationForLoader:(id)arg1 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(id)viewControllerForAlertPresentation;
-(void)objectModel:(id)arg1 didNavigateBackFromController:(id)arg2 withGesture:(char)arg3 ;
-(void)objectModel:(id)arg1 elementDidChange:(id)arg2 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)objectModel:(id)arg1 willLoadLinkURL:(id)arg2 attributes:(id)arg3 ;
-(NSString *)userAgentString;
-(void)setHostViewController:(UIViewController *)arg1 ;
-(UIViewController *)hostViewController;
-(id)dismissObjectModelsAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadData:(id)arg1 baseURL:(id)arg2 ;
-(void)_stopListeningForSMSAutoFill;
-(void)setLoadCompletion:(id)arg1 ;
-(void)_loadURL:(id)arg1 fromObjectModel:(id)arg2 postBody:(id)arg3 ;
-(void)_loadURL:(id)arg1 postBody:(id)arg2 fromObjectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_didRemoveObjectModel:(id)arg1 ;
-(void)_willPresentObjectModel:(id)arg1 modally:(char)arg2 ;
-(void)_removePreviousObjectModelsBackToIdentifier:(id)arg1 ;
-(void)_setHandlerWithKey:(id)arg1 forElementsMatching:(/*^block*/id)arg2 handler:(/*^block*/id)arg3 ;
-(id)setHandlerForElementsMatching:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 ;
-(id)loadCompletion;
-(void)_modalViewControllerWasPopped:(id)arg1 ;
-(void)_modalNavigationWasDismissed;
-(void)_beginListeningForSMSAutoFill;
-(id)parser:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3 ;
-(void)loadRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHandlerForButtonsMatching:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setHandlerForButtonName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setUserAgentString:(NSString *)arg1 ;
@end
