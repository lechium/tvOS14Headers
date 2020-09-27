/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@protocol MWFeedParserDelegate;
@class NSURLSessionDataTask, NSXMLParser, NSDateFormatter, NSURL, NSString, NSMutableString, NSDictionary, MWFeedItem, MWFeedInfo, NSURLRequest;

@interface MWFeedParser : NSObject <NSXMLParserDelegate> {

	id<MWFeedParserDelegate> delegate;
	NSURLSessionDataTask* urlTask;
	int feedParseType;
	NSXMLParser* feedParser;
	int feedType;
	NSDateFormatter* dateFormatterRFC822;
	NSDateFormatter* dateFormatterRFC3339;
	NSURL* url;
	BOOL aborted;
	BOOL parsing;
	BOOL stopped;
	BOOL failed;
	BOOL parsingComplete;
	BOOL hasEncounteredItems;
	NSString* pathOfElementWithXHTMLType;
	BOOL parseStructureAsContent;
	NSString* currentPath;
	NSMutableString* currentText;
	NSDictionary* currentElementAttributes;
	MWFeedItem* item;
	MWFeedInfo* info;
	NSURLRequest* request;

}

@property (nonatomic,copy) NSURL * url; 
@property (nonatomic,retain) NSURLRequest * request; 
@property (nonatomic,retain) NSURLSessionDataTask * urlTask; 
@property (nonatomic,retain) NSXMLParser * feedParser; 
@property (nonatomic,retain) NSString * currentPath; 
@property (nonatomic,retain) NSMutableString * currentText; 
@property (nonatomic,retain) NSDictionary * currentElementAttributes; 
@property (nonatomic,retain) MWFeedItem * item; 
@property (nonatomic,retain) MWFeedInfo * info; 
@property (nonatomic,copy) NSString * pathOfElementWithXHTMLType; 
@property (assign,nonatomic,__weak) id<MWFeedParserDelegate> delegate; 
@property (assign,nonatomic) int feedParseType; 
@property (getter=isStopped,nonatomic,readonly) BOOL stopped; 
@property (getter=didFail,nonatomic,readonly) BOOL failed; 
@property (getter=isParsing,nonatomic,readonly) BOOL parsing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<MWFeedParserDelegate>)delegate;
-(void)setDelegate:(id<MWFeedParserDelegate>)arg1 ;
-(NSURLRequest *)request;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)setItem:(MWFeedItem *)arg1 ;
-(MWFeedItem *)item;
-(BOOL)isStopped;
-(void)reset;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(BOOL)parse;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
-(MWFeedInfo *)info;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSURLSessionDataTask *)urlTask;
-(void)setUrlTask:(NSURLSessionDataTask *)arg1 ;
-(void)setInfo:(MWFeedInfo *)arg1 ;
-(void)parser:(id)arg1 validationErrorOccurred:(id)arg2 ;
-(NSMutableString *)currentText;
-(void)setCurrentText:(NSMutableString *)arg1 ;
-(NSString *)currentPath;
-(BOOL)isParsing;
-(void)setCurrentPath:(NSString *)arg1 ;
-(int)feedParseType;
-(NSXMLParser *)feedParser;
-(NSString *)pathOfElementWithXHTMLType;
-(NSDictionary *)currentElementAttributes;
-(id)initWithFeedURL:(id)arg1 ;
-(id)initWithFeedRequest:(id)arg1 ;
-(void)startParsingData:(id)arg1 textEncodingName:(id)arg2 ;
-(void)abortParsingEarly;
-(void)stopParsing;
-(void)parsingFinished;
-(void)parsingFailedWithErrorCode:(int)arg1 andDescription:(id)arg2 ;
-(void)dispatchFeedInfoToDelegate;
-(void)dispatchFeedItemToDelegate;
-(BOOL)createEnclosureFromAttributes:(id)arg1 andAddToItem:(id)arg2 ;
-(BOOL)processAtomLink:(id)arg1 andAddToMWObject:(id)arg2 ;
-(void)setFeedParseType:(int)arg1 ;
-(void)setFeedParser:(NSXMLParser *)arg1 ;
-(void)setCurrentElementAttributes:(NSDictionary *)arg1 ;
-(void)setPathOfElementWithXHTMLType:(NSString *)arg1 ;
-(BOOL)didFail;
@end
