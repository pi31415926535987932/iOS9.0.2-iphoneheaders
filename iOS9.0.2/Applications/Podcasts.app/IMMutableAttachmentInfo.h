/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/IMAttachmentInfo.h>
#import <Podcasts/IMMutableAttachmentInfoAEAnnotation.h>
#import <Podcasts/IMAVMutableAttachmentInfo.h>
#import <Podcasts/IMMutableAttachmentInfoIMCloudSync.h>

@class NSString, NSURL, NSDate;

@interface IMMutableAttachmentInfo : IMAttachmentInfo <IMMutableAttachmentInfoAEAnnotation, IMAVMutableAttachmentInfo, IMMutableAttachmentInfoIMCloudSync>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * key; 
@property (nonatomic,retain) NSURL * URL; 
@property (nonatomic,retain) NSString * UTI; 
@property (nonatomic,retain) NSDate * creationDate; 
-(void)_setAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)setPersistentAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)setTransientAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)setAEAnnotationUuid:(id)arg1 ;
-(void)setAEAnnotationAssetID:(id)arg1 ;
-(void)setAEAnnotationManagedObjectID:(id)arg1 ;
-(void)setIMCloudSyncUploaded:(char)arg1 ;
-(void)setIMAVStartTime:(double)arg1 ;
-(void)setIMAVAttachmentType:(int)arg1 ;
@end
