/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, HKHealthService, NSLock;

@interface HKHealthServiceSession : NSObject {

	NSArray* _interestedTransitoryKeys;
	/*^block*/id _transitoryDataHandler;
	HKHealthService* _service;
	NSLock* _propertyLock;
	unsigned _sessionIdentifier;
	/*^block*/id _sessionHandler;
	/*^block*/id _characteristicsHandler;

}

@property (nonatomic,readonly) HKHealthService * service;              //@synthesize service=_service - In the implementation block
@property (retain) NSArray * interestedTransitoryKeys; 
@property (copy) id transitoryDataHandler; 
@property (nonatomic,retain) NSLock * propertyLock;                    //@synthesize propertyLock=_propertyLock - In the implementation block
@property (assign,nonatomic) unsigned sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) id sessionHandler;                          //@synthesize sessionHandler=_sessionHandler - In the implementation block
@property (nonatomic,copy) id characteristicsHandler;                  //@synthesize characteristicsHandler=_characteristicsHandler - In the implementation block
-(void)setSessionHandler:(id)arg1 ;
-(id)transitoryDataHandler;
-(NSArray *)interestedTransitoryKeys;
-(void)setInterestedTransitoryKeys:(NSArray *)arg1 ;
-(void)setTransitoryDataHandler:(id)arg1 ;
-(NSLock *)propertyLock;
-(void)setPropertyLock:(NSLock *)arg1 ;
-(void)setCharacteristicsHandler:(id)arg1 ;
-(unsigned)sessionIdentifier;
-(void)setSessionIdentifier:(unsigned)arg1 ;
-(HKHealthService *)service;
-(id)initWithService:(id)arg1 ;
-(id)characteristicsHandler;
-(id)sessionHandler;
@end

