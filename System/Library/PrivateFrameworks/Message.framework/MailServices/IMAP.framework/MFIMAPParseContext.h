/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <IMAP/IMAP-Structs.h>
@class MFIMAPConnection, MFIMAPResponse;

@interface MFIMAPParseContext : NSObject {

	MFIMAPConnection* _connection;
	MFIMAPResponse* _response;
	const char* _start;
	const char* _end;
	const char* _originalStart;
	const char* _originalEnd;
	const char* _lastLoggedChar;
	BOOL _invalid;

}
+(BOOL)hadWarningOrError;
+(void)resetWarningOrError;
-(void)dealloc;
-(BOOL)isValid;
-(id)response;
-(const char*)start;
-(void)increment;
-(id)connection;
-(const char*)end;
-(void)setEnd:(const char*)arg1 ;
-(void)setStart:(const char*)arg1 ;
-(BOOL)match:(const char*)arg1 ;
-(id)initWithConnection:(id)arg1 response:(id)arg2 start:(const char*)arg3 end:(const char*)arg4 ;
-(BOOL)parseSpace;
-(void)emitWarning:(id)arg1 ;
-(BOOL)match:(const char*)arg1 upToSpecial:(const char*)arg2 ;
-(id)copyArray;
-(id)copyNumber;
-(id)copyMessageSet;
-(id)copyStringFrom:(const char*)arg1 to:(const char*)arg2 withCaseOption:(int)arg3 ;
-(id)copyAString;
-(unsigned char)lookAhead;
-(id)copyQuotedString;
-(id)copyAtom;
-(id)copyNilOrString;
-(void)emitError:(id)arg1 ;
-(BOOL)getNumber:(unsigned long long*)arg1 ;
-(void)logReadChars;
-(id)copyDateTime;
-(BOOL)literalWithResponseConsumer:(id)arg1 section:(id)arg2 ;
-(id)copyLiteral;
-(CFArrayRef)copyArrayAllowingNulls:(BOOL)arg1 ;
-(id)copyLiteralString;
-(const char*)nextSeparator;
@end

