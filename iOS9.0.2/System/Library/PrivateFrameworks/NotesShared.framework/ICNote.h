/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICCloudSyncingObject.h>
#import <libobjc.A.dylib/ICCloudObject.h>
#import <libobjc.A.dylib/ICSearchIndexableNote.h>
#import <libobjc.A.dylib/TTTextStorageDelegate.h>
#import <libobjc.A.dylib/NSTextStorageDelegate.h>

@class TTTextStorage, NSMutableSet, NSUUID, TTVectorMultiTimestamp, NSString, ICAccount, NSDate, NSNumber, NSSet, ICGroup, ICNoteData;

@interface ICNote : ICCloudSyncingObject <ICCloudObject, ICSearchIndexableNote, TTTextStorageDelegate, NSTextStorageDelegate> {

	TTTextStorage* _textStorage;
	NSMutableSet* _connectedSockets;
	NSMutableSet* _connectedDevices;
	NSUUID* _uuid;
	char needsRefresh;
	TTVectorMultiTimestamp* archivedTimestamp;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) ICAccount * account; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) NSNumber * noteHasChanges; 
@property (nonatomic,retain) NSString * snippet; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSNumber * type; 
@property (nonatomic,retain) NSSet * attachments; 
@property (nonatomic,retain) NSSet * folders; 
@property (nonatomic,retain) NSDate * foldersModificationDate; 
@property (nonatomic,retain) ICGroup * group; 
@property (nonatomic,retain) ICNoteData * noteData; 
@property (nonatomic,retain) NSNumber * integerId; 
@property (nonatomic,retain) NSDate * legacyModificationDateAtImport; 
@property (nonatomic,retain) NSString * legacyContentHashAtImport; 
@property (nonatomic,retain) NSString * legacyImportDeviceIdentifier; 
@property (nonatomic,retain) NSNumber * legacyNoteIntegerId; 
@property (nonatomic,retain) NSNumber * legacyNoteWasPlainText; 
@property (nonatomic,retain) NSString * thumbnailAttachmentIdentifier; 
@property (assign,nonatomic) char needsRefresh; 
@property (nonatomic,retain) TTTextStorage * textStorage; 
@property (nonatomic,retain) NSString * legacyManagedObjectIDURIRepresentation; 
@property (nonatomic,copy) TTVectorMultiTimestamp * archivedTimestamp; 
+(id)recordType;
+(id)defaultTitleForEmptyNote;
+(unsigned)maxNoteTextLength;
+(id)allCloudObjects;
+(id)existingCloudObjectForRecordID:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 ;
+(id)attributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2 ;
+(id)htmlObjectAttributesForAttachmentWithContentID:(id)arg1 ;
+(id)htmlStringFromAttributedString:(id)arg1 attachmentConversionHandler:(/*^block*/id)arg2 ;
+(id)htmlStringByFixingDashedListsInHTMLString:(id)arg1 ;
+(id)mutableAttributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2 ;
+(id)mutableAttributedStringFromHTMLString:(id)arg1 ;
+(void)fixDashedListsInAttributedString:(id)arg1 ;
+(void)fixUnwantedCharactersInAttributedString:(id)arg1 ;
+(void)fixFontsInAttributedString:(id)arg1 ;
+(id)tagDictionaryForWrapperAroundParagraphStyle:(id)arg1 ;
+(id)tagDictionariesForAttributes:(id)arg1 attachmentConversionHandler:(/*^block*/id)arg2 ;
+(char)isDefaultColor:(UIColor*)arg1 ;
+(id)hexStringForColor:(UIColor*)arg1 ;
+(id)attributedStringFromHTMLString:(id)arg1 ;
-(id)htmlString;
-(void)save;
-(char)isEditable;
-(char)isEmpty;
-(TTTextStorage *)textStorage;
-(char)isVisible;
-(id)uuid;
-(void)setTextStorage:(TTTextStorage *)arg1 ;
-(void)textStorage:(id)arg1 willProcessEditing:(unsigned)arg2 range:(NSRange)arg3 changeInLength:(int)arg4 ;
-(void)textStorage:(id)arg1 didProcessEditing:(unsigned)arg2 range:(NSRange)arg3 changeInLength:(int)arg4 ;
-(id)recordName;
-(id)recordZoneID;
-(void)unmarkForDeletion;
-(void)markForDeletion;
-(id)folder;
-(id)loggingDescriptionValues;
-(void)regenerateTitle;
-(void)setNoteType:(unsigned)arg1 ;
-(void)setFolder:(id)arg1 ;
-(char)requiresLegacyTombstoneAfterDeletion;
-(void)deleteFromLocalDatabase;
-(id)attachmentWithIdentifier:(id)arg1 ;
-(char)needsRefresh;
-(unsigned)mergeWithNoteData:(id)arg1 ;
-(void)setNeedsRefresh:(char)arg1 ;
-(id)visibleAttachments;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 ;
-(id)noteAsPlainTextWithoutTitle;
-(id)objectIdentifier;
-(void)saveNoteData;
-(void)setArchivedTimestamp:(TTVectorMultiTimestamp *)arg1 ;
-(void)didChangeNoteText;
-(NSRange)rangeForTitle:(char*)arg1 ;
-(id)noteAsPlainText;
-(char)canAddAttachments:(unsigned)arg1 ;
-(void)setNeedsInitialFetchFromCloud:(char)arg1 ;
-(id)attachmentFromLegacyAttachmentFileWrapper:(id)arg1 ;
-(id)attachmentFromRemoteFileWrapper:(id)arg1 ;
-(id)attachmentFromStandardFileWrapper:(id)arg1 ;
-(unsigned)mergeWithNoteDocument:(id)arg1 ;
-(void)regenerateSnippet;
-(void)replaceWithDocument:(id)arg1 ;
-(TTVectorMultiTimestamp *)archivedTimestamp;
-(NSRange)rangeForSnippet;
-(id)attachmentFromObject:(id)arg1 createIfNecessary:(char)arg2 ;
-(char)canAddAttachment;
-(void)filterAttachmentsInTextStorage:(id)arg1 range:(NSRange)arg2 ;
-(void)setNeedsSave;
-(void)setFolders:(NSSet *)arg1 ;
-(void)textStorageDidPerformUndo:(id)arg1 ;
-(unsigned)noteType;
-(id)connectedDevices;
-(id)connectedSockets;
-(char)allowsNewTextLength:(unsigned)arg1 ;
-(char)attachmentExceedsMaxSizeAllowed:(unsigned)arg1 ;
-(id)attachmentActivityItemsForSharing;
-(char)hasThumbnailImage;
-(UIImage*)thumbnailImageWithMinSize:(CGSize)arg1 scale:(float)arg2 imageScaling:(unsigned*)arg3 showAsFileIcon:(char*)arg4 isMovie:(char*)arg5 movieDuration:(SCD_Struct_IC2*)arg6 ;
-(void)fetchThumbnailImageWithMinSize:(CGSize)arg1 scale:(float)arg2 cache:(id)arg3 cacheKey:(id)arg4 processingBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(NSRange)rangeForAttachment:(id)arg1 ;
-(void)refreshNoteTextFromDataStore;
-(id)contentInfoText;
-(char)isDeletedOrInTrash;
-(void)setLegacyManagedObjectID:(id)arg1 ;
-(char)searchResultCanBeDeletedFromNoteContext;
-(void)deleteFromNoteContextUsingIndexerContext:(id)arg1 ;
-(id)searchableContentKeyPaths;
-(id)appURLForIndexerContext:(id)arg1 ;
-(int)visibilityTestingType;
-(id)searchIndexableTitleUsingContentTextIfNecessary:(id)arg1 ;
-(unsigned)searchResultsSection;
-(char)isHiddenFromSearch;
-(id)searchIndexStringsOutHasAdditionalStrings:(char*)arg1 ;
-(char)shouldUpdateIndexForChangedValues:(id)arg1 ;
-(char)supportsDeletionByTTL;
-(id)threadUnsafeNewlyCreatedRecord;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1 ;
-(id)objectsToBeDeletedBeforeThisObject;
-(char)hasAllMandatoryFields;
-(char)isInICloudAccount;
-(void)resetUniqueIdentifier;
-(int)mergePolicyForRecord:(id)arg1 ;
-(void)mergeDataFromRecord:(id)arg1 withMergePolicy:(int)arg2 ;
-(void)deduplicateSelfAndCreateNewObjectFromRecord:(id)arg1 ;
-(void)mergeFoldersFromRecord:(id)arg1 ;
-(id)attachmentForWebThumbnail;
-(id)htmlStringWithAttachmentConversionHandler:(/*^block*/id)arg1 ;
-(id)htmlStringWithAttachments:(char)arg1 ;
-(id)noteContextForIndexerContext:(id)arg1 ;
-(void)willSave;
-(void)didTurnIntoFault;
@end

