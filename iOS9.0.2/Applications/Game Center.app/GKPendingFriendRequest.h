/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, GKPlayer;

@interface GKPendingFriendRequest : NSObject {

	NSString* _recipient;
	int _recipientKind;
	NSString* _originator;
	GKPlayer* _originatorPlayer;
	NSString* _originatorEmail;
	NSString* _requestID;
	NSString* _message;
	NSString* _handle;
	char _shouldBadge;
	unsigned _friendRequestCount;
	char _purpleBuddyAccount;

}

@property (nonatomic,retain) NSString * recipient;                     //@synthesize recipient=_recipient - In the implementation block
@property (assign,nonatomic) int recipientKind;                        //@synthesize recipientKind=_recipientKind - In the implementation block
@property (nonatomic,retain) NSString * originator;                    //@synthesize originator=_originator - In the implementation block
@property (nonatomic,retain) GKPlayer * originatorPlayer;              //@synthesize originatorPlayer=_originatorPlayer - In the implementation block
@property (nonatomic,retain) NSString * originatorEmail;               //@synthesize originatorEmail=_originatorEmail - In the implementation block
@property (nonatomic,retain) NSString * requestID;                     //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) NSString * message;                       //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * handle;                        //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) char shouldBadge;                         //@synthesize shouldBadge=_shouldBadge - In the implementation block
@property (assign,nonatomic) unsigned friendRequestCount;              //@synthesize friendRequestCount=_friendRequestCount - In the implementation block
@property (assign,nonatomic) char purpleBuddyAccount;                  //@synthesize purpleBuddyAccount=_purpleBuddyAccount - In the implementation block
+(id)pushDictionaryForQuery:(id)arg1 ;
-(NSString *)originatorEmail;
-(unsigned)friendRequestCount;
-(void)setFriendRequestCount:(unsigned)arg1 ;
-(void)setRecipientKind:(int)arg1 ;
-(void)setOriginatorEmail:(NSString *)arg1 ;
-(void)setOriginatorPlayer:(GKPlayer *)arg1 ;
-(id)initWithURLQuery:(id)arg1 ;
-(int)recipientKind;
-(char)purpleBuddyAccount;
-(NSString *)handle;
-(NSString *)requestID;
-(NSString *)recipient;
-(void)setRecipient:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setOriginator:(NSString *)arg1 ;
-(NSString *)originator;
-(char)shouldBadge;
-(void)setShouldBadge:(char)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(id)initWithPushDictionary:(id)arg1 ;
-(GKPlayer *)originatorPlayer;
-(void)setPurpleBuddyAccount:(char)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
@end
