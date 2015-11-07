/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFAudioAnalyzerDelegate.h>
#import <libobjc.A.dylib/AVVoiceControllerRecordDelegate.h>
#import <libobjc.A.dylib/SFSpeechRecognitionTaskDelegate.h>

@protocol VTUITrainingManagerDelegate;
@class NSLock, NSString, AVVoiceController, AFAudioAnalyzer, VTPhraseSpotter, SFSpeechRecognizer, SFSpeechAudioBufferRecognitionRequest, SFSpeechRecognitionTask, NSMutableArray, NSTimer, NSMutableDictionary;

@interface VTUITrainingManager : NSObject <AFAudioAnalyzerDelegate, AVVoiceControllerRecordDelegate, SFSpeechRecognitionTaskDelegate> {

	char _dead;
	char _performRMS;
	NSLock* _lock;
	char _ASRAvailable;
	char _sessionStateInSession;
	char _sessionClosing;
	int _sessionNumber;
	char _sessionStateVTActive;
	char _sessionStateVTDetected;
	char _sessionStatePCMBufAdjusted;
	char _sessionStateDelayedEndASR;
	char _sessionStateBOS;
	char _sessionStateBOSDetected;
	char _sessionStateEOS;
	char _sessionStateEOSDetected;
	char _sessionStateUseASR;
	char _sessionStateASRError;
	int _sessionStateRecogScore;
	char _sessionStateResultFinal;
	char _sessionStateTm1Expired;
	char _sessionStateTv1Expired;
	char _sessionStateTb1Expired;
	char _sessionStateTe1Expired;
	int _sessionStateNumUtt;
	NSString* _locale;
	AVVoiceController* _voiceController;
	char _voiceControllerRecording;
	char _voiceControllerStopping;
	char _voiceControllerToBeStarted;
	char _voiceControllerToBeDestroyed;
	AFAudioAnalyzer* _audioAnalyzer;
	float _rmsfBuf[1024];
	VTPhraseSpotter* _phraseSpotter;
	SFSpeechRecognizer* _speechRecognizer;
	SFSpeechAudioBufferRecognitionRequest* _currentASRRequest;
	SFSpeechRecognitionTask* _currentASRTask;
	NSMutableArray* _recognitionWorkingTasks;
	NSString* _recognizedText;
	NSTimer* _timerTm1;
	NSTimer* _timerTv1;
	NSTimer* _timerTb1;
	NSTimer* _timerTe1;
	NSMutableDictionary* _eventInfo;
	NSMutableArray* _pcmBufArray;
	char _isFinal;
	int _numRequiredTrailingSamples;
	int _numTrailingSamples;
	/*^block*/id _trainingCompletion;
	/*^block*/id _cleanupCompletion;
	char _tv1Suspended;
	char _tb1Suspended;
	char _te1Suspended;
	char _suspendAudio;
	VTUITrainingManager* _keepAliveRef;
	char _speechRecognizerAvailable;
	float _rms;
	id<VTUITrainingManagerDelegate> _delegate;
	NSString* _audioInput;

}

@property (assign) float rms;                                                              //@synthesize rms=_rms - In the implementation block
@property (assign,nonatomic,__weak) id<VTUITrainingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) char speechRecognizerAvailable;                                       //@synthesize speechRecognizerAvailable=_speechRecognizerAvailable - In the implementation block
@property (nonatomic,retain) NSString * audioInput;                                        //@synthesize audioInput=_audioInput - In the implementation block
@property (assign) char suspendAudio; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<VTUITrainingManagerDelegate>)arg1 ;
-(id)init;
-(id<VTUITrainingManagerDelegate>)delegate;
-(void)reset;
-(void)endSession;
-(void)audioAnalyzer:(id)arg1 didDetectStartpointAtTime:(double)arg2 ;
-(void)audioAnalyzer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 ;
-(void)setAudioInput:(NSString *)arg1 ;
-(NSString *)audioInput;
-(void)voiceControllerDidDetectStartpoint:(id)arg1 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(int)arg2 ;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(char)arg2 error:(id)arg3 ;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 ;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3 ;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2 ;
-(void)voiceControllerBeginRecordInterruption:(id)arg1 ;
-(void)voiceControllerEndRecordInterruption:(id)arg1 ;
-(void)speechRecognitionDidDetectSpeech:(id)arg1 ;
-(void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2 ;
-(void)speechRecognitionTaskFinishedReadingAudio:(id)arg1 ;
-(void)speechRecognitionTaskWasCancelled:(id)arg1 ;
-(void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(char)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didRecordAudioPCMBuffer:(id)arg2 ;
-(char)cancelTrainingForID:(int)arg1 ;
-(void)stopRMS;
-(void)startRMS;
-(int)trainUtterance:(int)arg1 shouldUseASR:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)cleanupWithCompletion:(/*^block*/id)arg1 ;
-(void)setLocale;
-(char)createVoiceTrigger;
-(char)createRecognizer;
-(void)clearSessionFlags;
-(char)startVoiceController;
-(char)createVoiceControllerIfNeeded;
-(void)feedAudioToVTQueue:(id)arg1 ;
-(void)checkAndCallTrainingCompletionAsyncWithSessionNo:(int)arg1 Status:(int)arg2 ;
-(void)destroyVoiceController;
-(void)destroyVoiceTrigger;
-(void)destroyRecognizer;
-(void)startTm1;
-(void)startVT;
-(char)checkAndStartVoiceController;
-(void)handleTimerTm1:(id)arg1 ;
-(void)stopTm1;
-(void)handleTimerTv1:(id)arg1 ;
-(void)stopTv1;
-(void)handleTimerTb1:(id)arg1 ;
-(void)stopTb1;
-(void)handleTimerTe1:(id)arg1 ;
-(void)stopTe1;
-(void)finishSpeechRecognizerTask;
-(void)stopAudioForSpeechRecognition;
-(void)handleAudioInputForRMSWithBuffer:(id)arg1 ;
-(void)handleAudioInputForVTWithBuffer:(id)arg1 ;
-(void)handleAudioInputForRecognizerWithBuffer:(id)arg1 ;
-(void)handleSessionStateChanges;
-(void)adjustStartPointInSavedPCMBuffer;
-(void)stopVT;
-(void)startSpeechRecognition;
-(int)numSamplesInPCMBufArray;
-(void)feedSpeechRecognitionWithAudio;
-(void)stopSpeechRecognition;
-(void)startTb1;
-(void)startTe1;
-(void)stopVoiceController;
-(void)startTv1;
-(void)handleSessionStateChangesForShortTrainingUseASR;
-(void)handleSessionStateChangesForShortTrainingNoASR;
-(void)handleSessionStateChangesForLongTrainingUseASR;
-(void)handleSessionStateChangesForLongTrainingNoASR;
-(void)_matchRecognitionResult;
-(void)_removeTaskFromWorkingTasks:(id)arg1 ;
-(void)_handleSpeechRecognitionFinishedTask:(id)arg1 ;
-(char)_dead;
-(char)shouldPerformRMS;
-(char)isSessionStateInSession;
-(char)suspendAudio;
-(void)setSuspendAudio:(char)arg1 ;
-(float)rms;
-(void)setRms:(float)arg1 ;
-(char)speechRecognizerAvailable;
@end
