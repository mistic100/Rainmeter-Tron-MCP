function Initialize() end

local function isnil(str)
    return str == nil or str == ''
end

function Update()
    local value = SELF:GetOption('Value')
    if isnil(value) then
        return 0
    end

    local h, m = string.match(value, '(%d%d):(%d%d)')
    if isnil(h) or isnil(m) then
        return 0
    end

    return tonumber(h) * 60 + tonumber(m)
end
