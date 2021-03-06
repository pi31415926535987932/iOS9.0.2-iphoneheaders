/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MBSBackupStatusInfo : PBCodable <NSCopying> {

	unsigned _errorCode;
	NSString* _errorDescription;
	SCD_Struct_MB3 _has;

}

@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                       //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) char hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)errorCode;
-(char)hasErrorCode;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(char)arg1 ;
-(void)setErrorDescription:(NSString *)arg1 ;
-(char)hasErrorDescription;
-(NSString *)errorDescription;
-(char)readFrom:(id)arg1 ;
@end

