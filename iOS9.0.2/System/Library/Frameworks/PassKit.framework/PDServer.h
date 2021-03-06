/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/PDCardFileManagerDelegate.h>
#import <passd/PDPassLibraryDelegate.h>
#import <passd/PDDatabaseManagerDelegate.h>
#import <passd/PDWebServicesCoordinatorDelegate.h>
#import <passd/PDRelevantPassProviderDelegate.h>
#import <passd/PDDistributedNotificationConsumer.h>
#import <passd/PDInAppPaymentServiceDelegate.h>
#import <passd/PKPaymentTransactionProcessorDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, PDCardFileManager, PDDatabaseManager, PDBulletinManager, PDPushNotificationManager, PKSecureElement, PKFieldDetector, PDAssertionManager, PKApplicationRegistry, PDRemoteInterfacePresenter, PKPaymentTransactionProcessor, PDNotificationServiceCoordinator, PDPaymentWebServiceCoordinator, PDPaymentHostEndpointRegistry, PDDistributedNotificationManager, PDRelevantPassProvider, PDWebServicesCoordinator, PKCatalog, PKUsageNotificationServer, NSObject, NSString;

@interface PDServer : NSObject <PDCardFileManagerDelegate, PDPassLibraryDelegate, PDDatabaseManagerDelegate, PDWebServicesCoordinatorDelegate, PDRelevantPassProviderDelegate, PDDistributedNotificationConsumer, PDInAppPaymentServiceDelegate, PKPaymentTransactionProcessorDelegate, NSXPCListenerDelegate> {

	unsigned _initializationState;
	NSMutableSet* _passLibraries;
	PDCardFileManager* _cardFileManager;
	PDDatabaseManager* _databaseManager;
	PDBulletinManager* _bulletinManager;
	PDPushNotificationManager* _pushNotificationManager;
	NSMutableSet* _paymentServices;
	PKSecureElement* _secureElement;
	PKFieldDetector* _fieldDetector;
	PDAssertionManager* _assertionManager;
	PKApplicationRegistry* _suppressionApplicationRegistry;
	PDRemoteInterfacePresenter* _remoteInterfacePresenter;
	PKPaymentTransactionProcessor* _paymentTransactionProcessor;
	PDNotificationServiceCoordinator* _notificationServicesCoordinator;
	PDPaymentWebServiceCoordinator* _paymentWebServiceCoordinator;
	PDPaymentHostEndpointRegistry* _paymentHostEndpointRegistry;
	PDDistributedNotificationManager* _distributedNotificationManager;
	PDRelevantPassProvider* _relevantPassProvider;
	PDWebServicesCoordinator* _webServicesCoordinator;
	PKCatalog* _catalogOfRecord;
	PKUsageNotificationServer* _usageNotificationServer;
	NSObject*<OS_dispatch_queue> _installedPassesQueue;
	NSMutableSet* _installedPassUniqueIDs;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_mainInitialization;
-(void)_protectedDataInitialization;
-(char)_paymentPassesAvailable;
-(void)_selectNewDefaultPaymentPassIfNeeded;
-(void)_logStatsIfNecessary;
-(void)_arrangeNextPassRevocationCheck;
-(char)_validContactlessPassesAvailable;
-(void)_updateQuickActions;
-(void)_removePassLibrary:(id)arg1 connection:(id)arg2 ;
-(void)_addPassLibrary:(id)arg1 connection:(id)arg2 ;
-(void)_removePaymentService:(id)arg1 connection:(id)arg2 ;
-(void)_addPaymentService:(id)arg1 connection:(id)arg2 ;
-(void)_sendPassUpdated:(id)arg1 ;
-(void)_sendPassAdded:(id)arg1 ;
-(void)_clearDefaultPaymentPassIfNeeded;
-(void)_sendPassRemoved:(id)arg1 ;
-(void)_applyNewCatalogOfRecord:(id)arg1 ;
-(void)_schedulePassRevocationBackgroundTaskImmediately;
-(void)registerDatabaseObject:(id)arg1 ;
-(void)_restoreDatabaseIntegrity;
-(id)_catalogOfRecord;
-(id)_paymentServices;
-(void)_migrateOsloKeychain;
-(void)_sendRelevantPassesChanged;
-(id)_passLibraries;
-(void)_schedulePassRevocationBackgroundTaskIfNecessary;
-(void)_registerClientForPassRevocationCheck;
-(double)_timeSinceDateStoredInUserDefault:(id)arg1 ;
-(id)_shortcutItemForPassUniqueIdentifier:(id)arg1 ;
-(id)_shortcutIconWithName:(id)arg1 ;
-(void)_sendCatalogChanged:(id)arg1 ;
-(char)_paymentPassesAvailableToPay;
-(char)_validNFCPassesAvailable;
-(id)catalogOfRecord;
-(void)_logStats;
-(void)passWritten:(id)arg1 source:(int)arg2 withDiff:(id)arg3 ;
-(void)passWithUniqueIdentifierWillDisappear:(id)arg1 forReason:(unsigned)arg2 ;
-(void)passWithUniqueIdentifierDidDisappear:(id)arg1 forReason:(unsigned)arg2 ;
-(void)catalogOfRecordWritten:(id)arg1 ;
-(void)notePassWithUniqueID:(id)arg1 isRevoked:(char)arg2 ;
-(void)passLibrary:(id)arg1 requestedPassUpdate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)nukeStuff;
-(id)trueUniqueIDs;
-(void)readTrueUniqueIDs:(/*^block*/id)arg1 ;
-(void)mutateTrueUniqueIDs:(/*^block*/id)arg1 ;
-(id)storedPasses;
-(void)noteLockScreenSettingsChangedForPassWithUniqueIdentifier:(id)arg1 ;
-(void)noteAutomaticallyPresentSettingsChangedForPassWithUniqueIdentifier:(id)arg1 ;
-(void)noteSettingsChangedForPassWithUniqueIdentifier:(id)arg1 newSettings:(unsigned)arg2 ;
-(void)handleDatabaseIntegrityProblem;
-(void)handleEmptyWebServicesUpdateForSerialNumber:(id)arg1 passTypeID:(id)arg2 ;
-(char)shouldRecomputeRelevantPassesWithSearchMode:(int)arg1 ;
-(void)relevantPassProviderDidChangeCurrentRelevantPasses:(id)arg1 ;
-(void)handleNotificationWithName:(id)arg1 event:(id)arg2 ;
-(void)inAppPaymentService:(id)arg1 registerPaymentListenerEndpoint:(id)arg2 forHostIdentifier:(id)arg3 processIdentifier:(int)arg4 completion:(/*^block*/id)arg5 ;
-(void)inAppPaymentService:(id)arg1 retrievePaymentListenerEndpointForHostIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(char)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(char)arg2 ;
-(void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)introduceDatabaseIntegrityProblem;
-(void)migrateData;
-(void)removePassesOfType:(unsigned)arg1 ;
-(void)paymentTransactionUpdated:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 ;
-(void)paymentTransactionProcessorDidActivate:(id)arg1 ;
-(void)paymentTransactionProcessorDidDeactivate:(id)arg1 ;
-(id)notificationNames;
@end

