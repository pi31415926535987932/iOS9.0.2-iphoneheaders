/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AXValidationReportingServices;
@class NSString, NSMutableArray;

@interface AXValidationManager : NSObject {

	char _shouldLogToConsole;
	char _shouldCrashOnError;
	char _shouldReportToServer;
	char _forceDoNotReport;
	char _debugBuild;
	unsigned _numberOfValidationErrors;
	NSString* _validationTargetName;
	NSString* _overrideProcessName;
	NSMutableArray* _consoleErrorMessages;
	id<AXValidationReportingServices> _validationReportingServices;

}

@property (assign,nonatomic) char forceDoNotReport;                                                       //@synthesize forceDoNotReport=_forceDoNotReport - In the implementation block
@property (nonatomic,copy) NSString * validationTargetName;                                               //@synthesize validationTargetName=_validationTargetName - In the implementation block
@property (nonatomic,copy) NSString * overrideProcessName;                                                //@synthesize overrideProcessName=_overrideProcessName - In the implementation block
@property (assign,getter=isDebugBuild,nonatomic) char debugBuild;                                         //@synthesize debugBuild=_debugBuild - In the implementation block
@property (assign,nonatomic) char shouldLogToConsole;                                                     //@synthesize shouldLogToConsole=_shouldLogToConsole - In the implementation block
@property (assign,nonatomic) char shouldCrashOnError;                                                     //@synthesize shouldCrashOnError=_shouldCrashOnError - In the implementation block
@property (assign,nonatomic) char shouldReportToServer;                                                   //@synthesize shouldReportToServer=_shouldReportToServer - In the implementation block
@property (assign,nonatomic) unsigned numberOfValidationErrors;                                           //@synthesize numberOfValidationErrors=_numberOfValidationErrors - In the implementation block
@property (nonatomic,retain) NSMutableArray * consoleErrorMessages;                                       //@synthesize consoleErrorMessages=_consoleErrorMessages - In the implementation block
@property (nonatomic,retain) id<AXValidationReportingServices> validateionReportingServices;              //@synthesize validationReportingServices=_validationReportingServices - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)sendExceptionForSafeValueKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendExceptionForSafeIVarKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendExceptionForSafeBlock:(id)arg1 overrideProcessName:(id)arg2 ;
-(void)setValidateionReportingServices:(id<AXValidationReportingServices>)arg1 ;
-(void)setOverrideProcessName:(NSString *)arg1 ;
-(void)setValidationTargetName:(NSString *)arg1 ;
-(void)setConsoleErrorMessages:(NSMutableArray *)arg1 ;
-(void)performValidations:(/*^block*/id)arg1 withPreValidationHandler:(/*^block*/id)arg2 postValidationHandler:(/*^block*/id)arg3 safeCategoryInstallationHandler:(/*^block*/id)arg4 ;
-(void)setNumberOfValidationErrors:(unsigned)arg1 ;
-(void)setForceDoNotReport:(char)arg1 ;
-(void)setDebugBuild:(char)arg1 ;
-(void)setShouldLogToConsole:(char)arg1 ;
-(void)setShouldCrashOnError:(char)arg1 ;
-(void)setShouldReportToServer:(char)arg1 ;
-(NSString *)validationTargetName;
-(unsigned)numberOfValidationErrors;
-(void)_printConsoleReport:(char)arg1 isDelayed:(char)arg2 ;
-(void)installSafeCategories:(/*^block*/id)arg1 afterDelay:(double)arg2 validationTargetName:(id)arg3 overrideProcessName:(id)arg4 forceDoNotReport:(char)arg5 ;
-(char)isDebugBuild;
-(NSMutableArray *)consoleErrorMessages;
-(char)client:(id)arg1 validateClass:(id)arg2 ;
-(NSString *)overrideProcessName;
-(void)sendValidateExceptionForClass:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3 ;
-(char)client:(id)arg1 validateClass:(id)arg2 isKindOfClass:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg1 isKindOfClass:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(char)client:(id)arg1 validateClass:(id)arg2 hasInstanceVariable:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasInstanceVariable:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(char)client:(id)arg1 validateClass:(id)arg2 hasInstanceVariable:(id)arg3 withType:(char*)arg4 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasInstanceMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasClassMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(char)_client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 withFullSignature:(char*)arg4 argList:(void*)arg5 ;
-(char)_client:(id)arg1 validateClass:(id)arg2 hasMethod:(id)arg3 methodType:(int)arg4 returnType:(id)arg5 arguments:(id)arg6 ;
-(char)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 withFullSignature:(char*)arg4 argList:(void*)arg5 ;
-(char)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 ;
-(char)_client:(id)arg1 validateClass:(id)arg2 hasMethod:(id)arg3 methodType:(int)arg4 ;
-(char)client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 ;
-(char)client:(id)arg1 validateClass:(id)arg2 hasProperty:(id)arg3 ;
-(char)client:(id)arg1 validateClass:(id)arg2 hasProperty:(id)arg3 withType:(char*)arg4 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(char)client:(id)arg1 validateClass:(id)arg2 conformsToProtocol:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(char)client:(id)arg1 validateProtocol:(id)arg2 hasMethod:(id)arg3 isInstanceMethod:(char)arg4 isRequired:(char)arg5 ;
-(void)sendValidateExceptionForProtocol:(id)arg1 hasMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(char)client:(id)arg1 validateProtocol:(id)arg2 hasOptionalInstanceMethod:(id)arg3 ;
-(char)client:(id)arg1 validateProtocol:(id)arg2 hasRequiredInstanceMethod:(id)arg3 ;
-(char)client:(id)arg1 validateProtocol:(id)arg2 hasProperty:(id)arg3 ;
-(void)sendValidateExceptionForProtocol:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(char)installSafeCategory:(id)arg1 canInteractWithTargetClass:(char)arg2 ;
-(void)sendExceptionForInstallingSafeCategory:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3 ;
-(id<AXValidationReportingServices>)validateionReportingServices;
-(void)sendGenericReport:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendFailedAssertionWithErrorMessage:(id)arg1 overrideProcessName:(id)arg2 ;
-(void)sendFailedTestCase:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)performValidations:(/*^block*/id)arg1 withPreValidationHandler:(/*^block*/id)arg2 postValidationHandler:(/*^block*/id)arg3 ;
-(void)installSafeCategories:(/*^block*/id)arg1 afterDelay:(double)arg2 validationTargetName:(id)arg3 overrideProcessName:(id)arg4 ;
-(char)validateClass:(id)arg1 ;
-(char)validateClass:(id)arg1 isKindOfClass:(id)arg2 ;
-(char)validateClass:(id)arg1 hasInstanceVariable:(id)arg2 ;
-(char)validateClass:(id)arg1 hasInstanceVariable:(id)arg2 withType:(char*)arg3 ;
-(char)validateClass:(id)arg1 hasClassMethod:(id)arg2 withFullSignature:(char*)arg3 ;
-(char)client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 withFullSignature:(char*)arg4 ;
-(char)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 withFullSignature:(char*)arg4 ;
-(char)validateClass:(id)arg1 hasInstanceMethod:(id)arg2 withFullSignature:(char*)arg3 ;
-(char)validateClass:(id)arg1 hasInstanceMethod:(id)arg2 ;
-(char)validateClass:(id)arg1 hasClassMethod:(id)arg2 ;
-(char)validateClass:(id)arg1 hasProperty:(id)arg2 ;
-(char)validateClass:(id)arg1 hasProperty:(id)arg2 withType:(char*)arg3 ;
-(char)validateClass:(id)arg1 conformsToProtocol:(id)arg2 ;
-(char)validateProtocol:(id)arg1 hasMethod:(id)arg2 isInstanceMethod:(char)arg3 isRequired:(char)arg4 ;
-(char)validateProtocol:(id)arg1 hasOptionalInstanceMethod:(id)arg2 ;
-(char)validateProtocol:(id)arg1 hasRequiredInstanceMethod:(id)arg2 ;
-(char)validateProtocol:(id)arg1 hasOptionalClassMethod:(id)arg2 ;
-(char)client:(id)arg1 validateProtocol:(id)arg2 hasOptionalClassMethod:(id)arg3 ;
-(char)validateProtocol:(id)arg1 hasRequiredClassMethod:(id)arg2 ;
-(char)client:(id)arg1 validateProtocol:(id)arg2 hasRequiredClassMethod:(id)arg3 ;
-(char)validateProtocol:(id)arg1 hasProperty:(id)arg2 ;
-(char)installSafeCategory:(id)arg1 ;
-(char)shouldLogToConsole;
-(char)shouldCrashOnError;
-(char)shouldReportToServer;
-(char)forceDoNotReport;
@end
