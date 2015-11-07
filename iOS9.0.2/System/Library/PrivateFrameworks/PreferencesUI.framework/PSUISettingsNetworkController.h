/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, PSUIAppCellularUsageGroupController, PSListItemsController, PSUICellularAccountGroupController, CHManager;

@interface PSUISettingsNetworkController : PSListController {

	PSSpecifier* _viewAccount;
	PSSpecifier* _viewAccountGroup;
	PSSpecifier* _facetimeSetupButton;
	PSSpecifier* _facetimeSetupGroup;
	char _disabled;
	PSSpecifier* _mobileDataGroup;
	PSSpecifier* _enableRATSpecifier;
	int _RATSwitchKind;
	char _3GOverrideTo4G;
	char _LTEOverrideTo4G;
	PSSpecifier* _currentSpecifier;
	PSSpecifier* _lifetimeSpecifier;
	PSSpecifier* _lastResetSpecifier;
	PSUIAppCellularUsageGroupController* _appUsageGroupController;
	PSListItemsController* _RATModeDrilldownController;
	char _ignoreNextEntitlementStatusChange;
	PSUICellularAccountGroupController* _cellularGroupController;
	CHManager* _callHistoryManager;

}

@property (nonatomic,retain) PSUICellularAccountGroupController * cellularGroupController;              //@synthesize cellularGroupController=_cellularGroupController - In the implementation block
@property (nonatomic,retain) CHManager * callHistoryManager;                                            //@synthesize callHistoryManager=_callHistoryManager - In the implementation block
+(char)isConnectedOverWiFi;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)viewDidAppear:(char)arg1 ;
-(void)airplaneModeChanged;
-(id)controllerForSpecifier:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(id)dataUsageWorkspaceInfo;
-(void)newCarrierNotification;
-(void)totalBytesUsedChangedNotification;
-(void)entitlementStatusChanged;
-(void)handleCallTimersChanged;
-(void)cellularPlanChanged;
-(char)showDataPlanOnly;
-(void)setCellularGroupController:(PSUICellularAccountGroupController *)arg1 ;
-(PSUICellularAccountGroupController *)cellularGroupController;
-(void)updateRATStateWithDictionary:(id)arg1 ;
-(char)shouldShowLTEOptions;
-(char)shouldShowLegacyRATOptions;
-(char)_updateMobileDataGroupContentShowingRAT:(char)arg1 ;
-(char)shouldShowFaceTimeSetup;
-(char)shouldShowViewAccount;
-(void)_updateLastResetText;
-(char)isCellularDisabled;
-(void)updateAppUsageGroupEnabledState;
-(void)acceptedDataSwitch:(id)arg1 ;
-(void)canceledDataSwitch:(id)arg1 ;
-(void)_setMobileDataSwitch:(char)arg1 ;
-(void)updatePaneWithCellularDataState:(char)arg1 ;
-(void)updateRATSpecifiers;
-(id)isMobileDataEnabled:(id)arg1 ;
-(id)getRATModeState:(id)arg1 ;
-(char)supportsVoLTE;
-(void)_setRATModeStateIsOn:(char)arg1 ;
-(id)getRATSwitchIsOn:(id)arg1 ;
-(void)_setRATModeConfirmed:(int)arg1 ;
-(id)localizableRATModeStringKeyForKey:(id)arg1 targetMode:(int)arg2 ;
-(void)acceptedRATSwitch:(id)arg1 ;
-(void)canceledRATSwitch:(id)arg1 ;
-(void)setRATModeState:(id)arg1 specifier:(id)arg2 ;
-(id)getLTEService:(id)arg1 ;
-(void)setLTEService:(id)arg1 specifier:(id)arg2 ;
-(void)setRATSwitchIsOn:(id)arg1 specifier:(id)arg2 ;
-(void)reloadRATStatus:(id)arg1 ;
-(void)airplaneModeOrSIMStatusChanged;
-(CHManager *)callHistoryManager;
-(id)callTimeDurationRestrictedToCurrentPeriod:(char)arg1 ;
-(id)_lastUpdateDate;
-(void)setMobileDataIsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)roamingSettingsDescription:(id)arg1 ;
-(id)getDataRoamingPlanName:(id)arg1 ;
-(id)getDataRoamingStatus:(id)arg1 ;
-(void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getEUInternetStatus:(id)arg1 ;
-(void)setEUInternetCancelled:(id)arg1 ;
-(void)setEUInternetEnabledConfirmed:(id)arg1 ;
-(void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getCDMARoamingStatus:(id)arg1 ;
-(void)viewAccountPressed:(id)arg1 ;
-(void)setupCellularFaceTime:(id)arg1 ;
-(void)dataRegistrationChangedWithUserInfo:(id)arg1 ;
-(id)totalDataUsageForSpecifier:(id)arg1 ;
-(id)totalRoamingDataUsageForSpecifier:(id)arg1 ;
-(id)lifetimeCallTime:(id)arg1 ;
-(id)callTime:(id)arg1 ;
-(void)clearStats:(id)arg1 ;
-(id)isReliableNetworkFallbackEnabled:(id)arg1 ;
-(void)setReliableNetworkFallbackIsEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setCallHistoryManager:(CHManager *)arg1 ;
@end
