/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDWiProxLeSendDataRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dataLength : 1; 
    unsigned int _dataLength;
    } _has;
    NSString *_peerId;
    NSString *_sessionId;
    unsigned long long _timestamp;
}

@property unsigned int dataLength;
@property BOOL hasDataLength;
@property(readonly) BOOL hasPeerId;
@property(readonly) BOOL hasSessionId;
@property BOOL hasTimestamp;
@property(retain) NSString * peerId;
@property(retain) NSString * sessionId;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataLength;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDataLength;
- (BOOL)hasPeerId;
- (BOOL)hasSessionId;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerId;
- (BOOL)readFrom:(id)arg1;
- (id)sessionId;
- (void)setDataLength:(unsigned int)arg1;
- (void)setHasDataLength:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setPeerId:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end