/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFSearchResultHandler.h>
#import <libobjc.A.dylib/QueryProgressMonitor.h>

@class MFActivityMonitor;

@interface _MFBlockIterationHandler : NSObject <MFSearchResultHandler, QueryProgressMonitor> {

	/*^block*/id _block;
	BOOL _cancelled;
	MFActivityMonitor* _monitor;

}
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)filter;
-(void)handleMessage:(id)arg1 ;
-(BOOL)shouldCancel;
-(void)beginResult:(unsigned)arg1 ;
-(void)setResultSubject:(char*)arg1 ;
-(void)setResultSender:(char*)arg1 ;
-(void)setResultDateRecieved:(double)arg1 ;
-(void)setResultUnread:(BOOL)arg1 ;
-(void)endResult;
@end
