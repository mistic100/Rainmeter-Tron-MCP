function Initialize() end

local function isnil(str)
    return str == nil or str == ''
end

function Update()
    -- get input
    local value = SELF:GetOption('Value')
    if isnil(value) then
        return ''
    end

    -- parse ISO date
    local Y, M, D, h, m, s, zh, zm = string.match(value, '(%d%d%d%d)-(%d%d)-(%d%d)T(%d%d):(%d%d):(%d%d)([+-]?%d?%d?):?(%d?%d?)')
    if isnil(Y) or isnil(M) or isnil(D) or isnil(h) or isnil(m) or isnil(s) then
        return ''
    end

    -- get local time offset
    local ho, mo = string.match(os.date('%z'), '([+-]%d%d)(%d%d)')

    -- apply local offset
    h = tonumber(h) + tonumber(ho)
    m = tonumber(m) + tonumber(mo)

    -- apply input offset
    if not isnil(zh) then
        h = h - tonumber(zh)
    end
    if not isnil(zm) then
        m = m - tonumber(zm)
    end

    -- fix minutes outbounds
    if m >= 60 then
        h = h + 1
        m = m - 60
    elseif m < 0 then
        h = h - 1
        m = m + 60
    end

    -- fix hours outbounds
    if h >= 24 then
        h = h - 24
    elseif h < 0 then
        h = h + 24
    end

    -- format time
    return string.format('%02d:%02d', h, m)
end
