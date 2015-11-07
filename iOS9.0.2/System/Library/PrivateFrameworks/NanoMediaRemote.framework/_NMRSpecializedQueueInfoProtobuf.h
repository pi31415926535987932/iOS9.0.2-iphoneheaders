/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _NMRSpecializedQueueInfoProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _specializedQueues;

}

@property (nonatomic,retain) NSMutableArray * specializedQueues;              //@synthesize specializedQueues=_specializedQueues - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addSpecializedQueues:(id)arg1 ;
-(NSMutableArray *)specializedQueues;
-(unsigned)specializedQueuesCount;
-(void)clearSpecializedQueues;
-(id)specializedQueuesAtIndex:(unsigned)arg1 ;
-(void)setSpecializedQueues:(NSMutableArray *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end
