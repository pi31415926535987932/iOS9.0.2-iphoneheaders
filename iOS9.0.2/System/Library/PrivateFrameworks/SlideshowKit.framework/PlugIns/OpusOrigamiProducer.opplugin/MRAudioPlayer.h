/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MRAudioPlayer.h>
#import <OpusOrigamiProducer/MRAudioDucker.h>

@class NSArray, AVPlayer, NSString;

@interface MRAudioPlayer : NSObject <MRAudioPlayer, MRAudioDucker> {

	NSArray* _audioItems;
	char _shouldBePlaying;
	char _isMuted;
	AVPlayer* _avPlayer;
	float _volume;
	float _duckLevel;
	int _priority;
	float _currentVolume;
	double _duration;
	double _parentDuration;
	double _localTime;
	double _fadeInDuration;
	double _fadeOutDuration;
	double _duckInDuration;
	double _duckOutDuration;

}

@property (readonly) AVPlayer * avPlayer;                           //@synthesize avPlayer=_avPlayer - In the implementation block
@property (readonly) double duration;                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double localTime;                      //@synthesize localTime=_localTime - In the implementation block
@property (readonly) float currentVolume;                           //@synthesize currentVolume=_currentVolume - In the implementation block
@property (assign,nonatomic) char shouldBePlaying;                  //@synthesize shouldBePlaying=_shouldBePlaying - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume;                          //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) double fadeInDuration;                 //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (assign,nonatomic) double fadeOutDuration;                //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign,nonatomic) char isMuted;                          //@synthesize isMuted=_isMuted - In the implementation block
@property (assign,nonatomic) float duckLevel;                       //@synthesize duckLevel=_duckLevel - In the implementation block
@property (assign,nonatomic) double duckInDuration;                 //@synthesize duckInDuration=_duckInDuration - In the implementation block
@property (assign,nonatomic) double duckOutDuration;                //@synthesize duckOutDuration=_duckOutDuration - In the implementation block
@property (assign,nonatomic) double parentDuration;                 //@synthesize parentDuration=_parentDuration - In the implementation block
@property (assign,nonatomic) int priority;                          //@synthesize priority=_priority - In the implementation block
@property (readonly) float currentDuckLevel; 
-(float)duckLevel;
-(double)duckOutDuration;
-(double)duckInDuration;
-(void)setDuckLevel:(float)arg1 ;
-(char)shouldBePlaying;
-(void)resyncAudioItem;
-(void)setShouldBePlaying:(char)arg1 ;
-(void)syncVolumeToAudioPlaylist:(id)arg1 ;
-(id)initWithAudioItems:(id)arg1 andAudioPlaylist:(id)arg2 ;
-(void)setParentDuration:(double)arg1 ;
-(float)currentDuckLevel;
-(void)processWithDuckLevel:(float)arg1 ;
-(void)setDuckInDuration:(double)arg1 ;
-(void)setDuckOutDuration:(double)arg1 ;
-(float)currentVolume;
-(double)parentDuration;
-(AVPlayer *)avPlayer;
-(void)setVolume:(float)arg1 ;
-(void)dealloc;
-(double)duration;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(double)localTime;
-(void)setLocalTime:(double)arg1 ;
-(float)volume;
-(char)isMuted;
-(void)setIsMuted:(char)arg1 ;
@end
