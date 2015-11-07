/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PSPasscodeCreationDelegate;
@class NSString;

@interface PSPasscodeCreationManager : NSObject {

	char _numericPasscodeEntry;
	char _acceptedWeakPasscode;
	unsigned _passcodeState;
	NSString* _passcode;
	id<PSPasscodeCreationDelegate> _delegate;
	int _simplePasscodeEntryLength;
	NSString* _constraintFailedInstructions;

}

@property (assign,nonatomic) unsigned passcodeState;                                               //@synthesize passcodeState=_passcodeState - In the implementation block
@property (nonatomic,copy) NSString * passcode;                                                    //@synthesize passcode=_passcode - In the implementation block
@property (assign,nonatomic,__weak) id<PSPasscodeCreationDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * constraintInstructions; 
@property (assign,getter=isNumericPasscodeEntry,nonatomic) char numericPasscodeEntry;              //@synthesize numericPasscodeEntry=_numericPasscodeEntry - In the implementation block
@property (assign,nonatomic) int simplePasscodeEntryLength;                                        //@synthesize simplePasscodeEntryLength=_simplePasscodeEntryLength - In the implementation block
@property (assign,nonatomic) char acceptedWeakPasscode;                                            //@synthesize acceptedWeakPasscode=_acceptedWeakPasscode - In the implementation block
@property (nonatomic,copy) NSString * constraintFailedInstructions;                                //@synthesize constraintFailedInstructions=_constraintFailedInstructions - In the implementation block
+(id)sharedPasscodeManager;
-(void)setPasscodeState:(unsigned)arg1 ;
-(void)setConstraintFailedInstructions:(NSString *)arg1 ;
-(NSString *)constraintFailedInstructions;
-(char)isNumericPasscodeEntry;
-(int)simplePasscodeEntryLength;
-(unsigned)passcodeState;
-(char)isSimplePasscodeEntry;
-(void)_applyPasscode;
-(void)setAcceptedWeakPasscode:(char)arg1 ;
-(NSString *)constraintInstructions;
-(void)transitionToNextPasscodeStateForInput:(id)arg1 ;
-(void)acceptWeakPasscode:(char)arg1 ;
-(void)setNumericPasscodeEntry:(char)arg1 ;
-(void)setSimplePasscodeEntryLength:(int)arg1 ;
-(char)acceptedWeakPasscode;
-(void)setDelegate:(id<PSPasscodeCreationDelegate>)arg1 ;
-(id)init;
-(id<PSPasscodeCreationDelegate>)delegate;
-(void)reset;
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
@end
