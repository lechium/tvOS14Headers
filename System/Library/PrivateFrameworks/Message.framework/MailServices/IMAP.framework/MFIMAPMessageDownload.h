/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <IMAP/MFIMAPCompoundDownload.h>

@protocol MFDataConsumer, MFCollectingDataConsumer;
@class MFMessage, MFMimePart;

@interface MFIMAPMessageDownload : MFIMAPCompoundDownload {

	MFMessage* _message;
	MFMimePart* _topLevelPart;
	unsigned _allowsPartialDownloads : 1;
	unsigned _usingPartialDownloads : 1;
	unsigned _startedFetch : 1;
	unsigned _fetchingMessageContents : 1;
	unsigned _fetchingBodyText : 1;
	unsigned _doneAddingSubdownloads : 1;
	unsigned _fetchBodyData : 1;
	id<MFDataConsumer> _headerFilter;
	id<MFCollectingDataConsumer> _headerConsumer;
	id<MFDataConsumer> _textFilter;
	id<MFCollectingDataConsumer> _textConsumer;

}
-(void)dealloc;
-(id)data;
-(BOOL)isComplete;
-(id)message;
-(id)initWithMessage:(id)arg1 ;
-(id)topLevelPart;
-(void)setTopLevelPart:(id)arg1 ;
-(BOOL)partial;
-(void)handleFetchResult:(id)arg1 ;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(void)setAllowsPartialDownloads:(BOOL)arg1 ;
-(BOOL)allowsPartialDownloads;
-(void)setFetchBodyData:(BOOL)arg1 ;
-(BOOL)fetchBodyData;
@end

